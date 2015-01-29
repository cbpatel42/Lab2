#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

// This is a comment:) We are testing mergetool
//Comment mewrgetool

//This is a test comment ...
//!Class to read data from a file
/*!
 *The class accepts a character pointer called file_name that is opened with ifstream.
 *Reads one line at a time.
 *Includes functions that return the two boolean private members
 *_eof is updated with each read line
 *Destructor closes file and sets closed bool to true.
*/
class ReadFile
{
	private:
	ifstream input_file;
	bool _eof;
	bool closed;

	public:
	//! Constructor that accepts a const character array and opens that file. No provisions are made for files that cannot be opened
	ReadFile(const char* file_name);
	//! Destructor that closes the file stream.
    ~ReadFile();
	//!Checks to see if we have reached the end of line or the file is closed. If so, returns NULL. Otherwise, the _eof is updated with the opposite of the return value from getline and a pointer to a String object is created with the text read.
    String* readLine();
	//!Returns the value of the _eof member
    bool eof();
	//!If the file has not yet been closed, use the ifstream close member function and set closed to true.
    void close();
};

#endif
