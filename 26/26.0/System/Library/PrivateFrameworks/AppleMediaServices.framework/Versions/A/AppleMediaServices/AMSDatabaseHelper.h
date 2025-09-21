@interface AMSDatabaseHelper : NSObject

+ (id)databasePathForCachePath:(id)a0 type:(long long)a1;
+ (BOOL)_addSkipBackupAttribute:(BOOL)a0 forURL:(id)a1;
+ (id)databaseURLForCachePath:(id)a0 type:(long long)a1;
+ (id)databaseFolderNameForType:(long long)a0;
+ (id)_databaseNameForType:(long long)a0;
+ (BOOL)removeDatabaseAtURL:(id)a0 error:(out id *)a1;
+ (id)_cachesURLForCachePath:(id)a0;
+ (id)dataVaultURLForDataVaultPath:(id)a0;
+ (id)databaseURLForDataVaultPath:(id)a0 type:(long long)a1;
+ (BOOL)removeDatabaseForCachePath:(id)a0 error:(out id *)a1;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)a0;
+ (BOOL)removeDatabaseForDataVaultPath:(id)a0 error:(out id *)a1;
+ (id)databasePathForDataVaultPath:(id)a0 type:(long long)a1;

@end
