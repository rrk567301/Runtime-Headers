@interface NSNullFileHandle : NSFileHandle

- (unsigned long long)offsetInFile;
- (BOOL)closeAndReturnError:(out id *)a0;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (int)fileDescriptor;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (unsigned long long)seekToEndOfFile;
- (id /* block */)readabilityHandler;
- (id)readDataToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (void)closeFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (id /* block */)writeabilityHandler;
- (void)seekToFileOffset:(unsigned long long)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (id)availableData;
- (void)setReadabilityHandler:(id /* block */)a0;
- (void)synchronizeFile;

@end
