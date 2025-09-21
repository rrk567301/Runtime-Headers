@class NSString, PLLibraryServicesManager;

@interface PHAssetCrashRecoverySupport : NSObject <PLXPCUserInfo> {
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)shouldAttemptCrashRecoveryForLibraryWithPathManager:(id)a0;

- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_commitRequest:(id)a0 reply:(id /* block */)a1;
- (char)_isCrashRecoveryFilename:(id)a0;
- (char)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)a0;
- (void)_recoverFromCrashIfNeeded;
- (id)libraryServicesManager;
- (void)recoverFromCrashIfNeeded;

@end
