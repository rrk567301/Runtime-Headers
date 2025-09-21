@class NSDictionary;

@interface FFDefaultFileWriter : NSObject <FFFileWriter>

@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDictionary *dirAttributes;

- (id)init;
- (void).cxx_destruct;
- (char)createDirectoryAtURL:(id)a0 error:(id *)a1;
- (char)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;

@end
