@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)needsCoreDataMigration;
+ (id)_fallbackCoreDataChecksumFromLibraryFile;
+ (BOOL)isMomCompatible:(id)a0;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)isNewInstall;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (void)setLibraryImageStoreType:(id)a0;
+ (id)libraryImageStoreType;
+ (BOOL)needsDataMigration;
+ (id)storeOptionsWithUpgrade:(BOOL)a0;

@end
