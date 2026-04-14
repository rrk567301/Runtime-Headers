@class NSArray, NSDictionary, SMCopyEngine, SMConfMigrator;

@interface SMMigrateSystemInfo : SMMigrationEngineStep <SMCopyEngineDelegate>

@property (retain) SMConfMigrator *confMigrator;
@property (retain) NSDictionary *allRuleGroups;
@property (retain) NSArray *settingsCopiers;
@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL onlyUpdateSystemSettings;

- (id)description;
- (void).cxx_destruct;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)postProcess;
- (id)copyPaths;
- (id)preProcess;
- (void)copyMachineSettings;
- (void)copyNetworkSettings;
- (void)repairDatavaultPermissions;
- (void)repairTimezonePermissions;
- (BOOL)copyTimeZone;
- (BOOL)isHostconfigServiceEnabledOnSourceSystem:(id)a0;
- (BOOL)copyRemoteManagementSettings;
- (BOOL)copyVirtualMemorySettings;
- (BOOL)copyIgnorePremissionsSettings;
- (void)migrateDirectoryServicesDatabase;
- (void)runOpenDirectoryMigrationTool;
- (BOOL)copySystemSettings;
- (void)migrateGlobalPreferences;
- (BOOL)migrateNetworkSettings;
- (void)setupKerberos;
- (void)finishKerberosSetup;
- (void)prepareForServerMigration;
- (BOOL)deferCopyPath:(id)a0 sourceSystem:(id)a1 targetSystme:(id)a2;

@end
