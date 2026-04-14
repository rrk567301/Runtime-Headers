@interface NSNullFileHandle : NSFileHandle

- (id)readDataToEndOfFile;
- (unsigned long long)seekToEndOfFile;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (unsigned long long)offsetInFile;
- (void)synchronizeFile;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (id /* block */)writeabilityHandler;
- (int)fileDescriptor;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)closeFile;
- (BOOL)closeAndReturnError:(out id *)a0;
- (void)setReadabilityHandler:(id /* block */)a0;
- (void)seekToFileOffset:(unsigned long long)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id)availableData;
- (id /* block */)readabilityHandler;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;

@end
