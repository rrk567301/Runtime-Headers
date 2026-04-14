@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CNCDUnknownPropertyMigrator : CNCDMigrator

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableArray *migratedPropertiesToDelete;

- (void).cxx_destruct;
- (void)migrate;
- (void)upgradeMemojiMetadataProperties;
- (void)copyGuardianWhitelistedPropertyValuesToContacts:(id)a0;
- (void)copyImageHashValuesToContacts:(id)a0;
- (void)copyImageTypeValuesToContacts:(id)a0;
- (void)copyMemojiMetadataPropertyValuesToContacts:(id)a0;
- (void)deleteUpgradedProperties;
- (void)executeMigration:(id /* block */)a0;
- (BOOL)persistMovedData;
- (void)upgradeGuardianWhitelistedProperties;
- (void)upgradeImageHashProperties;
- (void)upgradeImageTypeProperties;
- (void)upgradePreviouslyUnknownPropertiesToKnownProperties;

@end
