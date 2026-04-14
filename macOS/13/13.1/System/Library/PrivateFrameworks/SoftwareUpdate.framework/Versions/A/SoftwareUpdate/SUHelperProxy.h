@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SUHelperProxy : NSObject <SUHelperDProtocol> {
    unsigned int _suhelperd_port;
    unsigned int _client_port;
    long long _currentRights;
    NSObject<OS_dispatch_queue> *_q;
    NSObject<OS_dispatch_source> *clientPortDeadChecker;
}

@property long long recentRights;

+ (id)sharedHelperProxy;
+ (id)sharedHelperProxyIfAvailable;

- (void)dealloc;
- (id)init;
- (BOOL)disconnect;
- (unsigned long long)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)a0;
- (BOOL)prepareInstallAssistantWithPath:(id)a0;
- (id)installAssistantPreparationStatus;
- (BOOL)setMacOSAutoUpdate:(BOOL)a0;
- (BOOL)setObject:(id)a0 forAnyUserPreference:(id)a1;
- (BOOL)deletePref:(id)a0 inDomain:(id)a1;
- (void)authorizeTool:(struct AuthorizationOpaqueRef { } *)a0 forRights:(long long)a1;
- (void)checkAndFixPermissionsAtPath:(id)a0 owner:(unsigned int)a1;
- (int)prepareForLogoutAndInstall:(BOOL)a0;
- (BOOL)prepareLoginWindowForPostLogoutInstallWithNoConsoleUser;
- (id)registerProductFile:(id)a0 forProductKey:(id)a1 firmware:(BOOL)a2 trustLevel:(int *)a3 keepOriginal:(BOOL)a4 inForeground:(BOOL)a5;
- (BOOL)registerPersonalizedManifests:(id)a0 forProductKey:(id)a1 inForeground:(BOOL)a2;
- (BOOL)makeQueues;
- (BOOL)moveInstalledPrintersToLibraryFromPath:(id)a0;
- (BOOL)removeMetadataCacheFromUpdates;
- (BOOL)moveMetadataCacheToUpdatesFromPath:(id)a0;
- (BOOL)movePPDVersionCacheToUpdatesFromPath:(id)a0;
- (BOOL)removeIndexFromUpdates;
- (id)readUpdatesIndex;
- (BOOL)writeUpdatesIndex:(id)a0;
- (BOOL)removeDistForProductKey:(id)a0 withFilename:(id)a1;
- (BOOL)createDirectoryForProductKey:(id)a0 Firmware:(BOOL)a1;
- (BOOL)removeProductDirectoryForKey:(id)a0;
- (BOOL)removeRecoveryInstallResult;
- (BOOL)removePackagesForLocalReferences:(id)a0 forProductKey:(id)a1;
- (BOOL)getDigest:(id *)a0 forPackageAtURL:(id)a1;
- (BOOL)clearAnyUserPreference:(id)a0;
- (BOOL)updateAnyUserPreferences;
- (BOOL)createUpdatesAvailableCookie;
- (BOOL)removeUpdatesAvailableCookie;
- (BOOL)setAppStoreAutoUpdate:(BOOL)a0;
- (BOOL)clearCatalogToProductionAndNotify;
- (BOOL)unenrollFromSeedProgram;
- (BOOL)stashLoginCredentialsEnablingFLO:(BOOL)a0;
- (BOOL)commitLoginCredentialsDisablingFLO:(BOOL)a0 hasBaseSystemUpdates:(BOOL)a1;
- (BOOL)stashAndCommitAPFSFDEKey;
- (BOOL)setAppleStagedUpgradeShouldFLORun:(BOOL)a0;
- (BOOL)setAppleUpgradeShouldFLORun:(BOOL)a0;
- (BOOL)configureProgressPhasesAll:(id)a0;
- (id)lookupURLCredentialInSystemKeychainForHost:(id)a0 port:(long long)a1;
- (BOOL)rebootForPostLogoutUpdatesAfterSuccess:(BOOL)a0 nightInstall:(BOOL)a1 shouldShutDown:(BOOL)a2;
- (BOOL)setNVRAMWithKey:(id)a0 value:(id)a1;
- (BOOL)_isAuthorized;
- (BOOL)isAuthorizedForRights:(long long)a0;
- (void)authorizeWithEmptyAuthorizationForRights:(long long)a0;
- (void)helperQueueReentrantSync:(id /* block */)a0;
- (id)registerProductFile:(id)a0 forProductKey:(id)a1 firmware:(BOOL)a2 trustLevel:(int *)a3 keepOriginal:(BOOL)a4;
- (BOOL)armBaseSystemUpdates:(id)a0 productKey:(id)a1 recoveryUpdatePackageURL:(id)a2 error:(id *)a3;

@end
