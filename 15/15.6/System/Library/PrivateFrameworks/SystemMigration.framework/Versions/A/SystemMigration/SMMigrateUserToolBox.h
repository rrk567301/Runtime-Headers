@interface SMMigrateUserToolBox : NSObject

+ (char)tenaciousCreateUserRecord:(id)a0 inDB:(id)a1;
+ (char)addDenyDeleteACLToPath:(id)a0;
+ (void)applyUserTemplateToDirectory:(id)a0 forUserWithName:(id)a1 andID:(unsigned int)a2;
+ (char)archiveUserDatabaseForDebuggingFromSourceSystem:(id)a0 toDestinationSystem:(id)a1;
+ (char)convertLegacyFilevaultAccountForUserEntry:(id)a0 onDestinationSystem:(id)a1;
+ (char)createUser:(id)a0 andCorrespondingGroup:(id)a1 inDB:(id)a2 onDestinationSystem:(id)a3 error:(id *)a4;
+ (char)deleteConflictingUsers:(id)a0 onSystem:(id)a1;
+ (unsigned int)gidForEveryoneACL;
+ (void)migrateExtraHiddenSystemUsersFrom:(id)a0 toDestinationSystem:(id)a1;
+ (char)migrateFileVaultMasterPasswordInfoFromSourceSystem:(id)a0 toDestinationSystem:(id)a1;
+ (char)migrateFinalCutProServerUserFrom:(id)a0 toDestinationSystem:(id)a1;
+ (char)migrateGlimmerblockerUserFrom:(id)a0 toDestinationSystem:(id)a1;
+ (char)migrateGuestAccountForRequest:(id)a0 andDestination:(id)a1;
+ (char)migrateRootUserFrom:(id)a0 toDestinationSystem:(id)a1 error:(id *)a2;
+ (char)migrateUserCustomImages:(id)a0 fromSourceSystem:(id)a1 toDestinationSystem:(id)a2;
+ (char)migrateUserEntry:(id)a0 andGroup:(char)a1 inDB:(id)a2 toDestinationSystem:(id)a3 error:(id *)a4;
+ (void)migrateUserRoleAccountsFrom:(id)a0 toDestinationSystem:(id)a1;
+ (char)modifyACLs:(id)a0 atPath:(id)a1;
+ (char)recreateAdminUsersForSourceSystem:(id)a0 andDestinationSystem:(id)a1;
+ (char)removeDenyDeleteACLFromPath:(id)a0;
+ (void)storeKeyInSystemKeychain:(id)a0 forUser:(id)a1 serverURL:(id)a2;
+ (char)storeSystemKeychainPassword:(id)a0 forAccount:(id)a1 service:(id)a2;

@end
