@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CNCDUnknownPropertyMigrator : CNCDMigrator

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableArray *migratedPropertiesToDelete;

- (void).cxx_destruct;
- (void)upgradePreviouslyUnknownPropertiesToKnownProperties;
- (void)executeMigration:(id /* block */)a0;
- (void)upgradeGuardianWhitelistedProperties;
- (void)upgradeImageTypeProperties;
- (void)upgradeImageHashProperties;
- (void)upgradeMemojiMetadataProperties;
- (BOOL)persistMovedData;
- (void)deleteUpgradedProperties;
- (void)copyImageTypeValuesToContacts:(id)a0;
- (void)copyImageHashValuesToContacts:(id)a0;
- (void)copyGuardianWhitelistedPropertyValuesToContacts:(id)a0;
- (void)copyMemojiMetadataPropertyValuesToContacts:(id)a0;
- (void)migrate;

@end
