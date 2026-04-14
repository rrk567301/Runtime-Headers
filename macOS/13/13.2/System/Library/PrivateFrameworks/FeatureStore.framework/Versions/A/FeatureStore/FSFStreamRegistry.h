@interface FSFStreamRegistry : NSObject

+ (id)registryFilePath;
+ (id)readFileInToDict;
+ (BOOL)writeDict:(id)a0;

- (BOOL)registerForStream:(id)a0 withSchema:(id)a1 error:(id *)a2;
- (id)getRegisteredStreams;

@end
