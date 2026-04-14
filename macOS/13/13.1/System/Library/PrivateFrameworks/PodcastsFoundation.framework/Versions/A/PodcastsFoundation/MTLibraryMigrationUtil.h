@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)isNewInstall;
+ (BOOL)needsCoreDataMigration;
+ (BOOL)needsDataMigration;
+ (id)libraryImageStoreType;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)isMomCompatible:(id)a0;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;

@end
