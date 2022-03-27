using namespace std;

template <class T>
class UnOrderedSet {
  vector<T> vetor;

public:
  typedef typename vector<T>::iterator iterator;

  UnOrderedSet( void ) {};
  UnOrderedSet( T& param ) {
    T c = param;
    c = (T) (c);
    vetor.push_back(c);
  };
  void print( void ) {
		for( int i = 0; i < vetor.size(); i++ ) {
			vetor[i].print();
		}
	}
  void insert( T& param ) {
    T c = param;
    c = (T) (c);
    vetor.push_back(c);
  }
};
