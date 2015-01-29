#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! Class to copy text to a file.
/*!
 *WriteFile accepts a const char array through the constructor and opens that file.
 *A file stream is used to open the file.
 *Writes one file at a time
 *Includes a function that closes the file stream and sets the closed boolean to true
*/

class WriteFile
{
	private:
		ofstream output_file;
		bool closed;
	public:
//! The construct accepts a constant character array that is used to open the file. No input validation needed as output files can be generated based off the given file name.
	WriteFile(const char* file_name);
//! The destructor closes the file. Since there is no dynamically allocated memory, no delete statements are used
    ~WriteFile();
//! Passed a pointer to a String object called line. If the file has not yet been closed nor is there is actual text in the object, that specific line of text is written to the output file.
    void writeLine(String* line);
//! Calls the close member function on the file stream. Sets closed to true.
    void close();
};
#endif
