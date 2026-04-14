@class SKDisk, NSError;

@interface OSICleanUpElement : OSIInstallQueueElement

@property (retain) SKDisk *alternateBlessTarget;
@property (retain) NSError *error;
@property BOOL done;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (BOOL)okayToSkip;
- (void)_writeToSeedingPlist;
- (void)_cleanUpPKGDMGSItemsAtPath:(id)a0;
- (void)_copyDiagnosticReportsToTarget;
- (void)_copyAPFSConverterLogToTarget;
- (void)_copyFSCKLogToTarget;
- (void)_writeAutoLanguageChooserCookie;
- (void)_addRunningLanguageAndDirToGlobalPreferences;
- (void)_writeInstallResultsCookieForSpotlight;
- (void)_writeInstallTypeCookieForServerAndMacBuddy;
- (void)_writeTALRestoreApps;
- (void)removeCleanupInstallerPlist:(id)a0;
- (void)_flushIALogToTarget;
- (BOOL)_requestTRBXCompatibilityCheck;
- (void)_stampSeedingProgramToSeedingCookie:(id)a0 cookiePath:(id)a1;

@end
