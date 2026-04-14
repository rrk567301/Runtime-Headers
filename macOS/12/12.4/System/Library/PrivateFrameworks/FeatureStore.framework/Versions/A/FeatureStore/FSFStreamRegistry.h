@interface FSFStreamRegistry : NSObject

+ (id)readFileInToDict;
+ (BOOL)writeDict:(id)a0;
+ (id)registryFilePath;

- (BOOL)registerForStream:(id)a0 withSchema:(id)a1 error:(id *)a2;
- (id)getRegisteredStreams;

@end
