@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)needsCoreDataMigration;
+ (id)libraryImageStoreType;
+ (id)storeOptionsWithUpgrade:(BOOL)a0;
+ (id)_fallbackCoreDataChecksumFromLibraryFile;
+ (BOOL)isMomCompatible:(id)a0;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsDataMigration;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)isNewInstall;
+ (BOOL)needsImageStoreMigration;

@end
