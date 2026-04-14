@class NSString, PLLibraryServicesManager;

@interface PHAssetCrashRecoverySupport : NSObject <PLXPCUserInfo> {
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAttemptCrashRecoveryForLibraryWithPathManager:(id)a0;

- (id)persistentStoreCoordinator;
- (id)libraryServicesManager;
- (BOOL)_isCrashRecoveryFilename:(id)a0;
- (void)recoverFromCrashIfNeeded;
- (id)initWithLibraryServicesManager:(id)a0;
- (BOOL)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)a0;
- (void)_recoverFromCrashIfNeeded;
- (void)_commitRequest:(id)a0 reply:(id /* block */)a1;
- (void)_triggerTapToRadarForCrashRecoveryConflictingUUID:(id)a0 existingAssetID:(id)a1 recoveryFileSubpath:(id)a2 resolvedUUID:(id)a3;
- (void)_checkAndResolveExistingAssetUUIDWithCreationRequest:(id)a0 recoveredFromFileURL:(id)a1;
- (void).cxx_destruct;

@end
