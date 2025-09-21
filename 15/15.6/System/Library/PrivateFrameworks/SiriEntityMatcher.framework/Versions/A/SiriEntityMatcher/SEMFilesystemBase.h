@class NSURL;

@interface SEMFilesystemBase : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *rootDirectory;

+ (id)baseURLWithTargetDirectoryPath:(id)a0 relativeToDirectoryPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)removeItemAtURL:(id)a0;
- (char)removeAllContents;
- (char)fileExistsWithName:(id)a0 inDirectory:(id)a1;
- (char)_fileExistsAtURL:(id)a0;
- (id)_resolveFileURLFromName:(id)a0 directory:(id)a1;
- (id)getOrCreateDirectoryWithRelativePath:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0;
- (char)isChildOfRootDirectory:(id)a0;
- (char)isEqualToFileManager:(id)a0;
- (id)readDictionaryFromPlistFileWithName:(id)a0 inDirectory:(id)a1;
- (id)readFileWithName:(id)a0 objectClass:(Class)a1 inDirectory:(id)a2;
- (char)writeDictionary:(id)a0 toPlistFileWithName:(id)a1 inDirectory:(id)a2;
- (char)writeObject:(id)a0 toFileWithName:(id)a1 inDirectory:(id)a2;

@end
