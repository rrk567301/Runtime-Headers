@interface MTLibraryMigrationUtil : NSObject

+ (id)libraryImageStoreType;
+ (BOOL)isNewInstall;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)needsCoreDataMigration;
+ (BOOL)needsDataMigration;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)isMomCompatible:(id)a0;

@end
