@class NSArray, NSDictionary, SMCopyEngine, SMConfMigrator;

@interface SMMigrateSystemInfo : SMMigrationEngineStep <SMCopyEngineDelegate>

@property (retain) SMConfMigrator *confMigrator;
@property (retain) NSDictionary *allRuleGroups;
@property (retain) NSArray *settingsCopiers;
@property (retain) SMCopyEngine *fileCopyEngine;
@property BOOL onlyUpdateSystemSettings;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)process;
- (id)prepare;
- (void)setEngine:(id)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (BOOL)copyIgnorePremissionsSettings;
- (void)copyMachineSettings;
- (void)copyNetworkSettings;
- (id)copyPaths;
- (BOOL)copyRemoteManagementSettings;
- (BOOL)copySystemSettings;
- (BOOL)copyTimeZone;
- (BOOL)copyVirtualMemorySettings;
- (BOOL)deferCopyPath:(id)a0 sourceSystem:(id)a1 targetSystme:(id)a2;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (void)finishKerberosSetup;
- (id)getLastModifiedDate:(id)a0;
- (BOOL)isHostconfigServiceEnabledOnSourceSystem:(id)a0;
- (void)migrateDirectoryServicesDatabase;
- (void)migrateGlobalPreferences;
- (void)migrateLockdownModeSetting;
- (BOOL)migrateNetworkSettings;
- (id)postProcess;
- (id)preProcess;
- (void)prepareForServerMigration;
- (void)repairDatavaultPermissions;
- (void)repairTimezonePermissions;
- (void)runOpenDirectoryMigrationTool;
- (void)setupFileCopyEngine;
- (void)setupKerberos;
- (void)transferRateChanged:(double)a0;

@end
