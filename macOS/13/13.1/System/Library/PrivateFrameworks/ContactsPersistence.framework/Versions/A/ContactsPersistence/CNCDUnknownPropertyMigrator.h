@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CNCDUnknownPropertyMigrator : CNCDMigrator

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableArray *migratedPropertiesToDelete;

- (void).cxx_destruct;
- (void)migrate;
- (void)executeMigration:(id /* block */)a0;
- (void)upgradePreviouslyUnknownPropertiesToKnownProperties;
- (void)upgradeImageTypeProperties;
- (void)copyImageTypeValuesToContacts:(id)a0;
- (void)upgradeImageHashProperties;
- (void)copyImageHashValuesToContacts:(id)a0;
- (void)upgradeGuardianWhitelistedProperties;
- (void)copyGuardianWhitelistedPropertyValuesToContacts:(id)a0;
- (void)upgradeMemojiMetadataProperties;
- (void)copyMemojiMetadataPropertyValuesToContacts:(id)a0;
- (BOOL)persistMovedData;
- (void)deleteUpgradedProperties;

@end
