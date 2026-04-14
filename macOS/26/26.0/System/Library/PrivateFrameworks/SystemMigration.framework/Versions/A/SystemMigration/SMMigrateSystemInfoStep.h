@class NSArray, SMRulesEngineDBClient, NSDictionary, SMConfMigrator, SMRulesEngineRuleHandler, SMCopyEngine;

@interface SMMigrateSystemInfoStep : SMEngineStep <SMCopyEngineDelegate>

@property (retain) SMConfMigrator *confMigrator;
@property (retain) SMRulesEngineRuleHandler *rulesEngineRuleHandler;
@property (retain) SMRulesEngineDBClient *rulesEngineDBClient;
@property (retain) NSDictionary *allRuleGroups;
@property (retain) NSArray *settingsCopiers;
@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL onlyUpdateSystemSettings;

- (id)prepare;
- (id)process;
- (id)initWithEngine:(id)a0;
- (void).cxx_destruct;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (BOOL)copyIgnorePremissionsSettings;
- (void)copyMachineSettings;
- (void)copyNetworkSettings;
- (BOOL)copyRemoteManagementSettings;
- (void)copySecuritySettings;
- (BOOL)copySystemSettings;
- (BOOL)copyTimeZone;
- (BOOL)copyVirtualMemorySettings;
- (void)executeKeychainPlugin;
- (void)finishKerberosSetup;
- (id)getLastModifiedDate:(id)a0;
- (BOOL)isHostconfigServiceEnabledOnSourceSystem:(id)a0;
- (void)migrateDirectoryServicesDatabase;
- (void)migrateGlobalPreferences;
- (void)migrateLockdownModeSetting;
- (BOOL)migrateNetworkSettings;
- (id)postProcess;
- (void)prepareForServerMigration;
- (void)prepareKerberosAndServerMigration;
- (void)repairDatavaultPermissions;
- (void)repairTimezonePermissions;
- (void)setupFileCopyEngine;
- (void)setupKerberos;

@end
