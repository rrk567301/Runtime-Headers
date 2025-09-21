@class PLSandboxedURL, NSString, LSBundleRecord, PLCaptureSessionState, NSSet, PLLazyObject;
@protocol PLDaemonServices;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {
    id<PLDaemonServices> _daemonServices;
    struct { unsigned int val[8]; } _auditToken;
    NSSet *_photoKitEntitlements;
    PLLazyObject *_lazyPhotosAccessAllowed;
    PLLazyObject *_lazyPhotosAddAccessAllowed;
    PLLazyObject *_lazytrustedCallerContainingBundleRecord;
    PLLazyObject *_lazyTrustedCallerDisplayName;
    PLLazyObject *_lazyTrustedCallerPhotoLibraryUsageDescription;
    PLLazyObject *_lazyFetchFilterIdentifier;
    PLLazyObject *_lazyCaptureSessionState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _lock_clientLimitedLibraryCapable;
    PLSandboxedURL *_clientMainBundleSandboxedURL;
}

@property (readonly) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *trustedCallerBundleID;
@property (readonly, copy) LSBundleRecord *trustedCallerContainingBundleRecord;
@property (readonly, copy) NSString *trustedCallerDisplayName;
@property (readonly, copy) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly, copy) NSString *fetchFilterIdentifier;
@property (readonly) char photoKitEntitled;
@property (readonly) char directDatabaseAccessAuthorized;
@property (readonly) char directDatabaseWriteAuthorized;
@property (readonly) char cloudInternalEntitled;
@property (readonly) char analyticsCacheReadEntitled;
@property (readonly) char analyticsCacheWriteEntitled;
@property (readonly) char smartSharingCacheReadEntitled;
@property (readonly) char smartSharingCacheWriteEntitled;
@property (readonly) char limitedLibraryMode;
@property (getter=isClientLimitedLibraryCapable) char clientLimitedLibraryCapable;
@property (readonly) char clientIsSandboxed;
@property (readonly) char photosDataVaultEntitled;
@property (readonly) char internalDataReadWriteAuthorized;
@property (readonly) char coreSceneUnderstandingTaxonomyReadAuthorized;
@property (readonly) char coreSceneUnderstandingTaxonomyWriteAuthorized;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotos) char clientAuthorizedForTCCServicePhotos;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotosAdd) char clientAuthorizedForTCCServicePhotosAdd;
@property (readonly) char managedSpotlightIndexReadWriteEntitled;
@property (readonly) PLCaptureSessionState *captureSessionState;
@property (readonly, getter=isClientAuthorizedForLibraryUpgrade) char clientAuthorizedForLibraryUpgrade;
@property (readonly, getter=isClientEntitledForPhotoKitOrPrivatePhotosTCC) char clientEntitledForPhotoKitOrPrivatePhotosTCC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isCameraClient;
- (char)isClientInLimitedLibraryMode;
- (char)photoKitEntitledFor:(id)a0;
- (id)_captureSessionState;
- (id)_captureSessionStateFromAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_fetchFilterIdentifier;
- (id)_isPhotosAccessAllowed;
- (id)_isPhotosAddAccessAllowed;
- (char)_isPhotosPickerClient;
- (char)_isPreferencesClient;
- (void)_setupAnalyticsCacheWithConnection:(id)a0;
- (void)_setupSmartSharingCacheWithConnection:(id)a0;
- (void)_trackCAConnectionEvent;
- (id)_trustedCallerContainingBundleRecord;
- (id)_trustedCallerDisplayName;
- (id)_trustedCallerPhotoLibraryUsageDescription;
- (id)initWithConnection:(id)a0 daemonServices:(id)a1;
- (void)invalidateClientAuthorizationCache;
- (char)isClientAuthorizedForSandboxExtensions;
- (char)isClientInFullLibraryMode;
- (char)isClientInRestrictedMode;
- (char)isPhotosClient;
- (char)isQuickCheckReadyForAnalysisClient;
- (void)setClientMainBundleSandboxedURL:(id)a0;

@end
