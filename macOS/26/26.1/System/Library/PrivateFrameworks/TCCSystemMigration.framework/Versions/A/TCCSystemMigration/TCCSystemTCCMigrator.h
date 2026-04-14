@class TCCSystemTCC, NSMutableArray;

@interface TCCSystemTCCMigrator : NSObject {
    TCCSystemTCC *_mainSystemTCC;
    TCCSystemTCC *_migratedSystemTCC;
    NSMutableArray *_toBeMigrated;
}

- (void).cxx_destruct;
- (id)init;
- (void)addSystemTCCAuthorizationForMigration:(id)a0 existingSet:(id)a1;
- (id)systemTCCItemsToBeMigrated;

@end
