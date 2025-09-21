@class NSString, NSFileManager;

@interface APStorageManager : NSObject <APDataStorable, APObjectStorable>

@property (retain, nonatomic) NSString *pathPrefix;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *rootPath;

+ (void)setRootPath:(id)a0;
+ (id)_applicationSupportSubdirectory:(id)a0;
+ (char)_removeStorageForSubdirectory:(id)a0;
+ (id)_rootSubdirectory;
+ (id)_validatedPath:(id)a0 error:(id *)a1;
+ (char)areThereStoredItems;
+ (void)cleanupOldStorage;
+ (char)removeStorage;
+ (void)sendAnalyticError:(id)a0 domain:(id)a1 code:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)contentsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (char)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (id)subpathsOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (char)fileExistsAtPath:(id)a0 error:(id *)a1;
- (char)_createDirectoriesForURL:(id)a0 error:(id *)a1;
- (id)_validatedFullURLForPath:(id)a0 error:(id *)a1;
- (id)createdDateForFileAtPath:(id)a0 error:(id *)a1;
- (id /* block */)iterateObjectsIncludingFolders:(char)a0;
- (Class)_classForEncryptedFile;
- (char)_fileExistsAtPath:(id)a0 isDirectory:(char *)a1 error:(id *)a2;
- (void)_initWithPathPrefix:(id)a0 rootPath:(id)a1;
- (void)_initWithSubdirectory:(id)a0;
- (id)_makeApplicationSupportSubdirectory:(id)a0;
- (id)_rootURL;
- (id)_validatedFullPathForPath:(id)a0 error:(id *)a1;
- (id)_validatedPath:(id)a0 error:(id *)a1;
- (id)addedToDirectoryDateForFileAtPath:(id)a0 error:(id *)a1;
- (id)dataStoredAtPath:(id)a0 error:(id *)a1;
- (void)dfsWithStartPath:(id)a0 nodeCallback:(id /* block */)a1;
- (char)directoryExistsAtPath:(id)a0 error:(id *)a1;
- (id)fileAtKeyPath:(id)a0 forMode:(long long)a1 error:(id *)a2;
- (id)fileForAppendingAtKeyPath:(id)a0 error:(id *)a1;
- (id)fileForReadingAtKeyPath:(id)a0 error:(id *)a1;
- (id)fileForWritingAtKeyPath:(id)a0 error:(id *)a1;
- (void)getStorageSize:(unsigned long long *)a0 allocatedSize:(unsigned long long *)a1 files:(unsigned long long *)a2;
- (id)initWithPathPrefix:(id)a0;
- (id)initWithPathPrefix:(id)a0 rootPath:(id)a1;
- (id)lastModifiedDateForFileAtPath:(id)a0 error:(id *)a1;
- (id)objectStoredAtPath:(id)a0 error:(id *)a1;
- (char)removeObjectAtPath:(id)a0 error:(id *)a1;
- (char)storeData:(id)a0 atPath:(id)a1 error:(id *)a2;
- (char)storeObject:(id)a0 atPath:(id)a1 error:(id *)a2;
- (char)touchFileAtPath:(id)a0 error:(id *)a1;

@end
