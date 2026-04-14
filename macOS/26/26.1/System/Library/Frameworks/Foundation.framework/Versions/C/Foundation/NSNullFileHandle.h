@interface NSNullFileHandle : NSFileHandle

- (void)writeData:(id)a0;
- (void)synchronizeFile;
- (void)seekToFileOffset:(unsigned long long)a0;
- (int)fileDescriptor;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (unsigned long long)offsetInFile;
- (id /* block */)readabilityHandler;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (void)closeFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readDataToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (unsigned long long)seekToEndOfFile;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id /* block */)writeabilityHandler;
- (id)availableData;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)setReadabilityHandler:(id /* block */)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;

@end
