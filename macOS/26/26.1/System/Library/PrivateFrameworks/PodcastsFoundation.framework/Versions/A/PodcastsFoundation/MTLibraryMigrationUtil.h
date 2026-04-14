@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)isMomCompatible:(id)a0;
+ (BOOL)needsCoreDataMigration;
+ (id)_fallbackCoreDataChecksumFromLibraryFile;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)needsDataMigration;
+ (id)storeOptionsWithUpgrade:(BOOL)a0;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)isNewInstall;
+ (id)libraryImageStoreType;

@end
