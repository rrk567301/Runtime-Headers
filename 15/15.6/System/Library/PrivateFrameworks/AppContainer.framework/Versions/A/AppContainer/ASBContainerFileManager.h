@class ASBContainer;

@interface ASBContainerFileManager : NSFileManager

@property (readonly) ASBContainer *container;

+ (void)setAutoFixPermissionsErrors:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(char)a3 error:(id *)a4;
- (id)URLsForDirectory:(unsigned long long)a0 inDomains:(unsigned long long)a1;
- (char)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (char)removeItemAtPath:(id)a0 error:(id *)a1;
- (char)removeItemAtURL:(id)a0 error:(id *)a1;
- (char)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (char)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(char)a1 attributes:(id)a2 error:(id *)a3;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (char)copyItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (char)linkItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (char)linkItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (char)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)initWithContainer:(id)a0;

@end
