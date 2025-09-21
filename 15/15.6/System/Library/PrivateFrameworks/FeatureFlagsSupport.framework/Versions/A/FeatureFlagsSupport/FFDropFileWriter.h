@interface FFDropFileWriter : NSObject <FFFileWriter>

- (char)createDirectoryAtURL:(id)a0 error:(id *)a1;
- (char)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;

@end
