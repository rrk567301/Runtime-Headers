@class TCCSystemTCC, NSMutableArray;

@interface TCCSystemTCCMigrator : NSObject {
    TCCSystemTCC *_mainSystemTCC;
    TCCSystemTCC *_migratedSystemTCC;
    NSMutableArray *_toBeMigrated;
}

- (id)init;
- (void).cxx_destruct;
- (void)addSystemTCCAuthorizationForMigration:(id)a0 existingSet:(id)a1;
- (id)systemTCCItemsToBeMigrated;

@end
