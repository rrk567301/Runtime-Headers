@class NSURL;

@interface CKVFilesystemBase : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *rootDirectory;

+ (id)sharedInstance;
+ (id)baseURLWithTargetDirectoryPath:(id)a0 relativeToDirectoryPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeItemAtURL:(id)a0;
- (id)_resolveFileURLFromName:(id)a0 directory:(id)a1;
- (BOOL)isChildOfRootDirectory:(id)a0;
- (BOOL)_fileExistsAtURL:(id)a0;
- (BOOL)writeObject:(id)a0 toFileWithName:(id)a1 inDirectory:(id)a2;
- (BOOL)fileExistsWithName:(id)a0 inDirectory:(id)a1;
- (id)readFileWithName:(id)a0 objectClass:(Class)a1 inDirectory:(id)a2;
- (BOOL)writeDictionary:(id)a0 toPlistFileWithName:(id)a1 inDirectory:(id)a2;
- (id)readDictionaryFromPlistFileWithName:(id)a0 inDirectory:(id)a1;
- (id)initWithTargetDirectoryPath:(id)a0 relativeToDirectoryPath:(id)a1;
- (BOOL)isEqualToFileManager:(id)a0;
- (id)getOrCreateDirectoryWithRelativePath:(id)a0;
- (BOOL)removeAllContents;

@end
