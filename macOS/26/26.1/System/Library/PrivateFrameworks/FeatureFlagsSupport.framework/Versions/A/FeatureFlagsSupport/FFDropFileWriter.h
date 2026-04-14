@interface FFDropFileWriter : NSObject <FFFileWriter>

- (BOOL)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtURL:(id)a0 error:(id *)a1;

@end
