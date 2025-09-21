@class NSString, NSURL;

@interface _NSFileManagerBridge : NSObject {
    void /* unknown type, empty encoding */ _impl;
}

@property (nonatomic, readonly) NSString *currentDirectoryPath;
@property (nonatomic, readonly) NSURL *homeDirectoryForCurrentUser;
@property (nonatomic, readonly) NSURL *temporaryDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (char)createSymbolicLinkAtPath:(id)a0 withDestinationPath:(id)a1 error:(id *)a2;
- (id)destinationOfSymbolicLinkAtPath:(id)a0 error:(id *)a1;
- (char)fileExistsAtPath:(id)a0;
- (char)isExecutableFileAtPath:(id)a0;
- (char)removeItemAtPath:(id)a0 error:(id *)a1;
- (char)setAttributes:(id)a0 ofItemAtPath:(id)a1 error:(id *)a2;
- (id)stringWithFileSystemRepresentation:(const char *)a0 length:(long long)a1;
- (char)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(char)a1 attributes:(id)a2 error:(id *)a3;
- (char)createDirectoryAt:(id)a0 withIntermediateDirectories:(char)a1 attributes:(id)a2 error:(id *)a3;
- (id)contentsAtPath:(id)a0;
- (id)attributesOfFileSystemForPath:(id)a0 error:(id *)a1;
- (id)attributesOfItemAtPath:(id)a0 error:(id *)a1;
- (char)changeCurrentDirectoryPath:(id)a0;
- (char)contentsEqualAtPath:(id)a0 andPath:(id)a1;
- (char)copyItemAt:(id)a0 to:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (char)copyItemAtPath:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (char)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (char)createSymbolicLinkAt:(id)a0 withDestinationURL:(id)a1 error:(id *)a2;
- (id)displayNameAtPath:(id)a0;
- (char)fileExistsAtPath:(id)a0 isDirectory:(char *)a1;
- (char)getRelationship:(long long *)a0 of:(unsigned long long)a1 in:(unsigned long long)a2 toItemAt:(id)a3 error:(id *)a4;
- (char)getRelationship:(long long *)a0 ofDirectoryAt:(id)a1 toItemAt:(id)a2 error:(id *)a3;
- (id)homeDirectoryForUser:(id)a0;
- (id)initWithFileManager:(id)a0;
- (char)isDeletableFileAtPath:(id)a0;
- (char)isReadableFileAtPath:(id)a0;
- (char)isWritableFileAtPath:(id)a0;
- (char)linkItemAt:(id)a0 to:(id)a1 error:(id *)a2;
- (char)linkItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (char)moveItemAt:(id)a0 to:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (char)moveItemAtPath:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (char)removeItemAt:(id)a0 error:(id *)a1;
- (id)subpathsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)urlFor:(unsigned long long)a0 in:(unsigned long long)a1 appropriateFor:(id)a2 create:(char)a3 error:(id *)a4;
- (id)urlsFor:(unsigned long long)a0 in:(unsigned long long)a1;

@end
