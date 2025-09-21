@interface NSNullFileHandle : NSFileHandle

- (char)closeAndReturnError:(out id *)a0;
- (char)writeData:(id)a0 error:(out id *)a1;
- (unsigned long long)seekToEndOfFile;
- (void)synchronizeFile;
- (char)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)availableData;
- (void)closeFile;
- (int)fileDescriptor;
- (char)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readDataToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (id /* block */)readabilityHandler;
- (void)seekToFileOffset:(unsigned long long)a0;
- (char)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)setReadabilityHandler:(id /* block */)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (char)synchronizeAndReturnError:(out id *)a0;
- (char)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)writeData:(id)a0;
- (id /* block */)writeabilityHandler;

@end
