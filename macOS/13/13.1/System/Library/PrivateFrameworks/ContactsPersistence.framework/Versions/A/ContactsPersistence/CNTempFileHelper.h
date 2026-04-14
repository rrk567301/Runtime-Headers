@interface CNTempFileHelper : NSObject

+ (id)temporaryDatabaseUrlByCopyingDatabaseAtPath:(id)a0 withCoordinator:(id)a1 error:(id *)a2;
+ (id)temporaryTimeMachineDirectory;
+ (id)temporaryDatabaseUrlForDatabasePath:(id)a0 error:(id *)a1;
+ (id)temporaryCopyingPathForDatabasePath:(id)a0;
+ (id)hashedMigrationDirectoryPathForDatabasePath:(id)a0;
+ (id)createHashedMigrationDirectoryForDatabasePath:(id)a0 error:(id *)a1;
+ (id)standardizedPathForPath:(id)a0;
+ (BOOL)copyDatabaseAtURL:(id)a0 toUrl:(id)a1 withCoordinator:(id)a2 error:(id *)a3;

@end
