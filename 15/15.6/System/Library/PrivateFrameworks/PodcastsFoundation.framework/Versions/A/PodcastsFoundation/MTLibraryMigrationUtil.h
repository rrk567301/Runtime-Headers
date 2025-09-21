@interface MTLibraryMigrationUtil : NSObject

+ (char)createPersistentStoreForModel:(id)a0 attemptMigration:(char)a1;
+ (char)isMomCompatible:(id)a0;
+ (char)isNewInstall;
+ (id)libraryImageStoreType;
+ (char)needsCoreDataMigration;
+ (char)needsDataMigration;
+ (char)needsImageStoreMigration;
+ (void)setLibraryImageStoreType:(id)a0;

@end
