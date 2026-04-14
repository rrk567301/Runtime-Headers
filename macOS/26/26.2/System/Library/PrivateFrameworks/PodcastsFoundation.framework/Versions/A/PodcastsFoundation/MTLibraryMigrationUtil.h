@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)needsDataMigration;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)isMomCompatible:(id)a0;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)needsCoreDataMigration;
+ (id)_fallbackCoreDataChecksumFromLibraryFile;
+ (id)storeOptionsWithUpgrade:(BOOL)a0;
+ (id)libraryImageStoreType;
+ (BOOL)isNewInstall;

@end
