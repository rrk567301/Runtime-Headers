@class NSURL, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject

@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) NSURL *libraryURL;
@property (retain) PLPhotoLibraryPathManager *pathManager;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)appPrivateDataForLibraryURL:(id)a0;
+ (id)appPrivateDataContentsWithBundleID:(id)a0 pathManager:(id)a1;
+ (id)_appPrivateDataFolderURLWithPathManager:(id)a0 createIfNeeded:(BOOL)a1;
+ (BOOL)_validateBundleRootWithPathManager:(id)a0;

- (id)allKeys;
- (id)debugDescription;
- (id)valueForKey:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (BOOL)setValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)setValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (id)_dictionaryStorageURL;
- (id)_dictionaryStorageURLPreparedForWriting:(BOOL)a0;
- (void)_readFromFilesystemWithDictionaryStorageURL:(id)a0;
- (void)_recursiveCreateSubDictionariesIfMissing:(id)a0 index:(unsigned long long)a1 parentDictionary:(id)a2;
- (BOOL)_saveToFilesystemWithError:(id *)a0;
- (id)initWithLibraryURL:(id)a0 alternateDictionaryStorageURL:(id)a1;

@end
