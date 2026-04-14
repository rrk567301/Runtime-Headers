@class NSArray, NSDictionary, SMCopyEngine, SMConfMigrator;

@interface SMMigrateSystemInfo : SMMigrationEngineStep <SMCopyEngineDelegate>

@property (retain) SMConfMigrator *confMigrator;
@property (retain) NSDictionary *allRuleGroups;
@property (retain) NSArray *settingsCopiers;
@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL onlyUpdateSystemSettings;

- (id)description;
- (void).cxx_destruct;
- (id)prepare;
- (id)process;
- (id)initWithEngine:(id)a0;
- (id)postProcess;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)preProcess;
- (id)copyPaths;
- (void)setupKerberos;
- (void)prepareForServerMigration;
- (void)runOpenDirectoryMigrationTool;
- (void)copyMachineSettings;
- (void)copyNetworkSettings;
- (void)repairDatavaultPermissions;
- (void)finishKerberosSetup;
- (BOOL)copyTimeZone;
- (BOOL)copySystemSettings;
- (BOOL)copyRemoteManagementSettings;
- (BOOL)copyVirtualMemorySettings;
- (BOOL)copyIgnorePremissionsSettings;
- (void)migrateDirectoryServicesDatabase;
- (void)migrateGlobalPreferences;
- (BOOL)migrateNetworkSettings;
- (BOOL)isHostconfigServiceEnabledOnSourceSystem:(id)a0;
- (BOOL)deferCopyPath:(id)a0 sourceSystem:(id)a1 targetSystme:(id)a2;

@end
