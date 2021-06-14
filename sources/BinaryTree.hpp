#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

using namespace std;

namespace ariel{

    template<class T> class BinaryTree{
        public:
            typename std::vector<T>::iterator itr;

            BinaryTree(){
            }
            BinaryTree add_root(T num){
                return *this;
            }
            BinaryTree add_left(T num1, T num2){

                // return 
                return *this;
            }
            BinaryTree add_right(T num1, T num2){

                return *this;
            }
            typename std::vector<T>::iterator end_preorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin_preorder(){

                return itr;
            }
            typename std::vector<T>::iterator end_inorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin_inorder(){

                return itr;
            }
            typename std::vector<T>::iterator end_postorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin_postorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin(){
                return itr;

            }
            typename std::vector<T>::iterator end(){
                
                return itr;
            }

            friend ostream& operator<<(ostream& out, const BinaryTree& tree){
                return out;
            } 

    };
}
