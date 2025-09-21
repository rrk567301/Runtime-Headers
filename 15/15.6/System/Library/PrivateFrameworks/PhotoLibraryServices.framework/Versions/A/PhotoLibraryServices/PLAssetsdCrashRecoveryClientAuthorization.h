@class NSString, LSBundleRecord, PLCaptureSessionState;

@interface PLAssetsdCrashRecoveryClientAuthorization : NSObject <PLClientAuthorization>

@property (readonly) struct { unsigned int val[8]; } clientAuditToken;
@property (readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *trustedCallerBundleID;
@property (readonly, copy) LSBundleRecord *trustedCallerContainingBundleRecord;
@property (readonly, copy) NSString *fetchFilterIdentifier;
@property (readonly, copy) NSString *trustedCallerDisplayName;
@property (readonly, copy) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly) char photoKitEntitled;
@property (readonly) char directDatabaseAccessAuthorized;
@property (readonly) char directDatabaseWriteAuthorized;
@property (readonly) char cloudInternalEntitled;
@property (readonly) char analyticsCacheReadEntitled;
@property (readonly) char analyticsCacheWriteEntitled;
@property (readonly) char smartSharingCacheReadEntitled;
@property (readonly) char smartSharingCacheWriteEntitled;
@property (readonly) char limitedLibraryMode;
@property (readonly, getter=isClientLimitedLibraryCapable) char clientLimitedLibraryCapable;
@property (readonly) char clientIsSandboxed;
@property (readonly) char photosDataVaultEntitled;
@property (readonly) char internalDataReadWriteAuthorized;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotos) char clientAuthorizedForTCCServicePhotos;
@property (readonly, getter=isClientAuthorizedForTCCServicePhotosAdd) char clientAuthorizedForTCCServicePhotosAdd;
@property (readonly) char coreSceneUnderstandingTaxonomyReadAuthorized;
@property (readonly) char coreSceneUnderstandingTaxonomyWriteAuthorized;
@property (readonly) PLCaptureSessionState *captureSessionState;
@property (readonly) char managedSpotlightIndexReadWriteEntitled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
