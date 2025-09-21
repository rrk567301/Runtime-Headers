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
- (char)disconnect;
- (char)setObject:(id)a0 forAnyUserPreference:(id)a1;
- (char)_isAuthorized;
- (unsigned long long)attemptToReclaimSpaceUsingCacheDeleteWithSpaceRequired:(unsigned long long)a0;
- (void)authorizeTool:(struct AuthorizationOpaqueRef { } *)a0 forRights:(long long)a1;
- (void)authorizeWithEmptyAuthorizationForRights:(long long)a0;
- (unsigned long long)cacheDeletePurgeableSpace;
- (void)checkAndFixPermissionsAtPath:(id)a0 owner:(unsigned int)a1;
- (char)clearAnyUserPreference:(id)a0;
- (char)clearCatalogToProductionAndNotify;
- (char)commitLoginCredentialsDisablingFLO:(char)a0 hasBaseSystemUpdates:(char)a1;
- (char)configureProgressPhasesAll:(id)a0;
- (char)createDirectoryForProductKey:(id)a0 Firmware:(char)a1;
- (char)deletePref:(id)a0 inDomain:(id)a1;
- (char)getDigest:(id *)a0 forPackageAtURL:(id)a1;
- (void)helperQueueReentrantSync:(id /* block */)a0;
- (char)isAuthorizedForRights:(long long)a0;
- (id)lookupURLCredentialInSystemKeychainForHost:(id)a0 port:(long long)a1;
- (char)makeQueues;
- (char)moveInstalledPrintersToLibraryFromPath:(id)a0;
- (char)moveMetadataCacheToUpdatesFromPath:(id)a0;
- (char)movePPDVersionCacheToUpdatesFromPath:(id)a0;
- (int)prepareForLogoutAndInstall;
- (char)prepareLoginWindowForPostLogoutInstallWithNoConsoleUser;
- (char)readFactoryVersion:(id *)a0;
- (id)readUpdatesIndex;
- (char)rebootForPostLogoutUpdatesAfterSuccess:(char)a0 nightInstall:(char)a1 shouldShutDown:(char)a2;
- (id)registerProductFile:(id)a0 forProductKey:(id)a1 firmware:(char)a2 trustLevel:(int *)a3 keepOriginal:(char)a4;
- (id)registerProductFile:(id)a0 forProductKey:(id)a1 firmware:(char)a2 trustLevel:(int *)a3 keepOriginal:(char)a4 inForeground:(char)a5;
- (char)removeIndexFromUpdates;
- (char)removePackagesForLocalReferences:(id)a0 forProductKey:(id)a1;
- (char)removeProductDirectoryForKey:(id)a0;
- (char)setAppStoreAutoUpdate:(char)a0;
- (char)setAppleStagedUpgradeShouldFLORun:(char)a0;
- (char)setAppleUpgradeShouldFLORun:(char)a0;
- (char)setMacOSAutoUpdate:(char)a0;
- (char)setNVRAMWithKey:(id)a0 value:(id)a1;
- (char)stashAndCommitAPFSFDEKey;
- (char)stashLoginCredentialsEnablingFLO:(char)a0;
- (char)updateAnyUserPreferences;
- (char)writeUpdatesIndex:(id)a0;

@end
