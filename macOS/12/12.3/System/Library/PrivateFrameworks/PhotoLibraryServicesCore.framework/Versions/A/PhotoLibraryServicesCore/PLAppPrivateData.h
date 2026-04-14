@class NSURL, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLAppPrivateData : NSObject

@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) NSURL *libraryURL;
@property (retain) PLPhotoLibraryPathManager *pathManager;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)appPrivateDataForLibraryURL:(id)a0;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)valueForKey:(id)a0;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)initWithLibraryURL:(id)a0;
- (BOOL)setValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)setValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (void)_readFromFilesystem;
- (id)_dictionaryStorageURL;
- (id)_appPrivateDataFolderURL;
- (BOOL)_saveToFilesystemWithError:(id *)a0;
- (void)_recursiveCreateSubDictionariesIfMissing:(id)a0 index:(unsigned long long)a1 parentDictionary:(id)a2;

@end
