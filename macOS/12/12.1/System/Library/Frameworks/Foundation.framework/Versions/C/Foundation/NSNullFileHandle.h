@interface NSNullFileHandle : NSFileHandle

- (void)writeData:(id)a0;
- (int)fileDescriptor;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (unsigned long long)offsetInFile;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)a0;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)synchronizeFile;
- (void)closeFile;
- (id)availableData;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (BOOL)closeAndReturnError:(out id *)a0;
- (id /* block */)writeabilityHandler;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id /* block */)readabilityHandler;
- (void)setReadabilityHandler:(id /* block */)a0;

@end
