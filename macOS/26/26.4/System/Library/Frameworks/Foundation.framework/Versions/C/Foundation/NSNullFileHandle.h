@interface NSNullFileHandle : NSFileHandle

- (unsigned long long)seekToEndOfFile;
- (id /* block */)readabilityHandler;
- (unsigned long long)offsetInFile;
- (void)setReadabilityHandler:(id /* block */)a0;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (void)closeFile;
- (id)readDataToEndOfFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)synchronizeFile;
- (void)writeData:(id)a0;
- (id)availableData;
- (int)fileDescriptor;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id /* block */)writeabilityHandler;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)seekToFileOffset:(unsigned long long)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;

@end
