// ----------------------------------------------- definicoes globais
#ifndef _NYARRAY_H_
#define _MYARRAY_H_

// dependencias
#include <iostream>
using std::cin ;
using std::cout;
using std::endl; 


#include <iomanip>
using std::setw; // para definir espacamento

#include <string>
using std::string; // para cadeia de caracteres

#include <fstream>
using std::ofstream;  // para gravar arquivo
using std::ifstream ; // para ler arquivo

template < typename T >
class Array
{
    private: // area reservada
        int length;
        T *data;
        
    public: // area aberta
        
        Array ( int n )
        {
            // definir valor inicial
            length = n;
            // reservar area
            data = new T [ length ];
        } // end constructor

        Array ( ) // construtor padrao
        {
            // definir valor inicial
            length = 0;
            // reservar area
            data = NULL;
        } // end constructor
        
        // contrutor baseado em copia
        Array ( int length, int other [ ] )
        {
            if ( length == 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            }
            else
            {
                // criar copia
                this->length = length;
                
                // reservar area
                data = new T [ this->length ];
                
                // ler dados
                for ( int x = 0; x < this->length; x=x+1 )
                {
                    data [ x ] = other [ x ];
                } // end for
            } // end if
        } // end constructor ( )

        Array& operator= ( const Array <T> other )
        {
            if ( other.length == 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            }
            else
            {
                this->length = other.length;
                this->data = new T [ other.length ];
                for ( int x = 0; x < this->length; x=x+1 )
                {
                    data [ x ] = other.data [ x ];
                } // end for
            } // end if
            return ( *this );
        } // end operator= ( )

        Array ( const Array& other )
        {
            if ( other.length == 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            }
            else
            {
                // criar copia
                length = other.length;
                // reservar area
                data = new T [ other.length ];
                // ler dados
                for ( int x = 0; x < length; x=x+1 )
                {
                    data [ x ] = other.data [ x ];
                } // end for
            } // end if
        } // end constructor ( )
        
        void free ( )
        {
            if ( data != NULL )
            {
                delete ( data );
                data = NULL;
            } // end if
        } // end free ( )

        void set ( int position, T value )
        {
            if ( 0 <= position && position <= length )
            {
                data [ position ] = value;
            } // end if 
        } // end set ( )
        
        T get ( int position )
        {
            T value = 0;
            
            // return value has type dependency
            if ( 0 <= position && position <= length )
            {
                value = data [ position ];
            } // end if
            return ( value );
        } // end get ( )
        
        void print ( )
        {
            cout << endl;
            for ( int x = 0; x < length; x=x+1 )
            {
                cout << setw( 3 ) << x << " : "
                << setw( 9 ) << data[ x ]
                << endl;
            } // end for
            cout << endl;
        } // end print ( )

        void read ( )
        {
            cout << endl;
            for ( int x = 0; x < length; x=x+1 )
            {
                cout << setw( 3 ) << x << " : ";
                cin >> data[ x ];
            } // end for
            cout << endl;
        } // end read ( )

        void fprint ( string fileName )
        {
            ofstream afile; // output file
            
            afile.open ( fileName );
            afile << length << endl;
            
            for ( int x = 0; x < length; x++ )
            {
                afile << data[x] << endl;
            } // end for
            
            afile.close ( );
        } // end fprint ( )

        void fread ( string fileName )
        {
            
            ifstream afile; // input file
            int n = 0;
            afile.open ( fileName );
            afile >> n;
            
            if ( n <= 0 )
            {
                cout << "\nERROR: Invalid length.\n" << endl;
            }
            else
            {
                // guardar a quantidade de dados
                length = n;
                
                // reservar area
                data = new T[n];
                
                // ler dados
                for ( int x = 0; x < length; x=x+1 )
                {
                    afile >> data[x];
                } // end for

            } // end if

            afile.close ( );
        } // end fread ( )

        bool operator== ( const Array <T> other )
        {
            bool result = true;
            int x = 0;
            if ( other.length == 0 || length != other.length )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            }
            else
            {
                x = 0;
                while ( x < this->length && result )
                {
                    result = result && (data [ x ] == other.data [ x ] );
                    x = x + 1;
                } // end for
            } // end if
            return ( result );
        } // end operator== ( )

        Array& operator+ ( const Array <T> other )
        {
            static Array <T> result ( other );
            if ( other.length == 0 )
            {
                cout << "\nERROR: Missing data.\n" << endl;
            }
            else
            {
                for ( int x = 0; x < this->length; x=x+1 )
                {
                    result.data [ x ] = result.data [ x ] + other.data [ x ];
                } // end for
            } // end if
            return ( result );
        } // end operator+ ( )

        const int getLength ( )
        {
            return ( length );
        } // end getLength ( )

        T& operator[]( const int position )
        {
            static T value = 0;
            // return value has type dependency
            if ( position < 0 || length <= position )
            {
                cout << endl << "\nERROR: Invalid position.\n" << endl;
            }
            else
            {
                value = data [ position ];
            } // end if
            return ( value );
        } // end operator[]

        int randomInt(int inferior, int superior)
        {
            int range = superior - inferior;
            return (int)rand() % range + inferior; 
        }

        int getBigest()
        {
            int value = 0;
            for(int i = 0; i < this->length; i++)
            {
                if(value < this->data[i])
                    value = this->data[i];
            }
            return value;
        }

        int getSmallest()
        {
            int value = std::numeric_limits<int>::max();
            for(int i = 0; i < this->length; i++)
            {
                if(value > this->data[i])
                    value = this->data[i];
            }
            return value;
        }

        int getSum()
        {
            int value = 0;
            for(int i = 0; i < this->length; i++)
                value += this->data[i];
            return value;
        }

        float getAverage()
        {
            int value = 0;
            for(int i = 0; i < this->length; i++)
                value += this->data[i];
            return (float)value/(float)this->length;
        }

        bool isZero()
        {
            for(int i = 0; i < this->length; i++)
            {
                if(this->data[i] != 0)
                    return false;
            }
            return true;
        }

        bool isSorted()
        {
            int tpm = this->data[0];
            
            int i = 1;
            while(i < this->length && tpm <= this->data[i])
            {
                tpm = this->data[i];
                i++;
            }
            return i == this->length;
        }

        bool isReversedSorted()
        {
            int tpm = this->data[0];
            
            int i = 1;
            while(i < this->length && tpm >= this->data[i])
            {
                tpm = this->data[i];
                i++;
            }
            return i == this->length;
        }

        bool findValue(T value, int min, int max)
        {
            if(min < 0 || max > this->length)
            {
                cout << "ERROS valores invalidos" << endl;
            }
            else
            {            
                for (int i = min; i < max; i++)
                {
                    if(value == this->data[i])
                        return true;
                }
            }

            return false;
        }

        Array scale(int c)
        {
            Array<T> tpm(this->length);

            for(int i = 0; i < this->length; i++)
            {
                tpm.set(i,this->data[i]*c);
            }
            return tpm;
        }

        void sort()
        {
            while(!this->isReversedSorted())
            {
                for(int i = 1; i < this->length; i++)
                {
                    if(this->data[i-1] < this->data[i])
                    {
                        T tpm = this->data[i];
                        this->data[i] = this->data[i-1];
                        this->data[i-1] = tpm; 
                    }
                }
            }
        }
};
#endif
