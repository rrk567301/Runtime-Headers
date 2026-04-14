@interface MTLibraryMigrationUtil : NSObject

+ (id)libraryImageStoreType;
+ (id)_fallbackCoreDataChecksumFromLibraryFile;
+ (BOOL)isMomCompatible:(id)a0;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsDataMigration;
+ (BOOL)needsImageStoreMigration;
+ (id)storeOptionsWithUpgrade:(BOOL)a0;
+ (BOOL)needsCoreDataMigration;
+ (BOOL)isNewInstall;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;

@end
