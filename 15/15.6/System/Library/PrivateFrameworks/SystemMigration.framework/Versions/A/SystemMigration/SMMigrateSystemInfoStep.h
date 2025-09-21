@class NSArray, SMRulesEngineDBClient, NSDictionary, SMConfMigrator, SMRulesEngineRuleHandler, SMCopyEngine;

@interface SMMigrateSystemInfoStep : SMEngineStep <SMCopyEngineDelegate>

@property (retain) SMConfMigrator *confMigrator;
@property (retain) SMRulesEngineRuleHandler *rulesEngineRuleHandler;
@property (retain) SMRulesEngineDBClient *rulesEngineDBClient;
@property (retain) NSDictionary *allRuleGroups;
@property (retain) NSArray *settingsCopiers;
@property (retain) SMCopyEngine *fileCopyEngine;
@property (readonly) NSArray *copyPaths;
@property char onlyUpdateSystemSettings;

- (id)description;
- (void).cxx_destruct;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (char)copyEngineShouldContinueByFastChecking:(char)a0;
- (char)copyIgnorePremissionsSettings;
- (void)copyMachineSettings;
- (void)copyNetworkSettings;
- (char)copyRemoteManagementSettings;
- (char)copySystemSettings;
- (char)copyTimeZone;
- (char)copyVirtualMemorySettings;
- (void)finishKerberosSetup;
- (id)getLastModifiedDate:(id)a0;
- (char)isHostconfigServiceEnabledOnSourceSystem:(id)a0;
- (void)migrateDirectoryServicesDatabase;
- (void)migrateGlobalPreferences;
- (void)migrateLockdownModeSetting;
- (char)migrateNetworkSettings;
- (id)postProcess;
- (void)prepareForServerMigration;
- (void)prepareKerberosAndServerMigration;
- (void)repairDatavaultPermissions;
- (void)repairTimezonePermissions;
- (void)setupFileCopyEngine;
- (void)setupKerberos;

@end
