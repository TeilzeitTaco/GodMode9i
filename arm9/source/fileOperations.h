#ifndef FILE_COPY
#define FILE_COPY

#include <nds.h>

extern char clipboard[256];
extern char clipboardFilename[256];
extern bool clipboardFolder;
extern bool clipboardOn;
extern bool clipboardUsed;
extern bool clipboardDrive;	// false == SD card, true == Flashcard
extern bool clipboardInNitro;

extern void printBytes(int bytes);

extern off_t getFileSize(const char *fileName);
extern int fcopy(const char *sourcePath, const char *destinationPath);

#endif // FILE_COPY
