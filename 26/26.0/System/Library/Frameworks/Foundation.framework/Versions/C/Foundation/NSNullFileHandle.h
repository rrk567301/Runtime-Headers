@interface NSNullFileHandle : NSFileHandle

- (id /* block */)writeabilityHandler;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (void)writeData:(id)a0;
- (int)fileDescriptor;
- (id)readDataToEndOfFile;
- (void)setReadabilityHandler:(id /* block */)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)seekToFileOffset:(unsigned long long)a0;
- (void)closeFile;
- (id /* block */)readabilityHandler;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)availableData;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (unsigned long long)seekToEndOfFile;
- (void)synchronizeFile;
- (unsigned long long)offsetInFile;
- (BOOL)closeAndReturnError:(out id *)a0;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;

@end
