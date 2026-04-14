@class NSString, NSDictionary, LPAPFSVolume;

@interface BYRequest : NSObject

@property (retain) NSString *volumeGroupUUID;
@property (copy) id /* block */ authenticationHandler;
@property (retain) NSDictionary *options;
@property (retain) NSString *restoreBundlePathOverride;
@property (retain) LPAPFSVolume *targetVolume;
@property (retain) LPAPFSVolume *sourcePrebootVolume;
@property (retain) LPAPFSVolume *targetPrebootVolume;
@property (retain) LPAPFSVolume *iscPrebootVolume;
@property (retain) LPAPFSVolume *targetRecoveryVolume;
@property (retain) LPAPFSVolume *externalRecoveryVolume;
@property (readonly) NSString *osManifestPath;
@property (readonly) NSString *osPersonalizedManifestPath;
@property (readonly) NSString *osGlobalManifestPath;
@property (readonly) NSString *osStagedGlobalManifestPath;
@property (readonly) NSString *sfrManifestPath;
@property (readonly) NSString *restoreBundlePath;
@property (readonly) NSString *stagedRestoreBundlePath;
@property unsigned int previousSecurityMode;
@property unsigned int securityMode;
@property BOOL usePersonalizedManifest;
@property BOOL shouldSetBoot;
@property BOOL shouldSetBootOnce;
@property BOOL needsLocalPolicy;
@property BOOL needsPersonalization;
@property BOOL needsInstall;
@property BOOL startedUpdateLocalPolicyNonce;
@property struct __ACMHandle { } *acmContext;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)getPairedRecoveryInfoFromStagedRestoreBundle:(BOOL)a0 supported:(BOOL *)a1 error:(id *)a2;
- (id)initWithVolumeGroupUUID:(id)a0 authenticationHandler:(id /* block */)a1 options:(id)a2;
- (BOOL)getBooleanOption:(id)a0 exists:(BOOL *)a1;
- (id)_osManifestPathInRestoreBundle:(id)a0 global:(BOOL)a1;

@end
