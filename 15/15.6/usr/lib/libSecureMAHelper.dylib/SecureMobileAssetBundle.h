@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SecureMobileAssetBundle : NSObject {
    NSString *_assetBundlePath;
    NSString *_assetType;
    NSString *_assetSpecifier;
    NSDictionary *_assetInfoPlist;
    NSDictionary *_cryptexInfoPlist;
    NSDictionary *_assetAttributes;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *personalizationQueue;

@property (readonly) NSString *secureAssetDataPath;
@property (readonly) NSString *graftPath;
@property (readonly) NSString *cryptexPath;
@property (readonly) NSString *secureInfoPlistPath;
@property (readonly) NSString *insecureInfoPlistPath;
@property (readonly) NSString *ticketPath;
@property (readonly) NSString *stagedPersonalizedManifestPath;
@property (readonly) unsigned int graftdmgType;
@property (readonly) NSString *rootHashPath;
@property (readonly) NSString *trustCachePath;
@property (readonly) NSDictionary *insecureInfoPlist;
@property (readonly) NSDictionary *assetAttributes;
@property (readonly) NSString *assetType;
@property (readonly) NSString *assetSpecifier;
@property (nonatomic) char darwinOnly;
@property (readonly, nonatomic) NSString *assetBundlePath;
@property (readonly, nonatomic) char isSecureMobileAsset;
@property (readonly, nonatomic) char isPersonalized;
@property (readonly, nonatomic) char isPersonalizedManifestStaged;
@property (readonly, nonatomic) char isAccessible;
@property (readonly, nonatomic) NSString *accessPath;
@property (readonly, nonatomic) NSDictionary *secureInfoPlist;

+ (char)commitStagedManifestsForSelectors:(id)a0 error:(id *)a1;
+ (char)fsTag:(unsigned int *)a0 forAssetType:(id)a1 specifier:(id)a2;
+ (char)clearGraftList:(id *)a0;
+ (char)assetIsSecureMobileAsset:(id)a0;
+ (char)commitStagedManifestsForSelectors:(id)a0 darwinOnly:(char)a1 error:(id *)a2;
+ (id)copyGraftList:(id *)a0;
+ (id)getGraftListLock;
+ (id)getSigningServerURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (char)isMounted;
- (char)mount:(id *)a0;
- (char)unmount:(id *)a0;
- (char)isPersonalized:(long long *)a0;
- (char)_generateNonceProposalForHandle:(unsigned long long)a0 digest:(id *)a1 nonce:(id *)a2 error:(id *)a3;
- (id)_manifestDataFromFullyFormedTicket:(id)a0;
- (char)_personalize:(id)a0 error:(id *)a1;
- (id)_personalizedBundleTicketData;
- (char)_shouldForcePersonalizationFailure;
- (char)_storeManifest:(id)a0 stage:(char)a1 error:(id *)a2;
- (id)assetValues;
- (id)attach:(id)a0 error:(id *)a1;
- (char)beginAccess:(long long)a0 error:(id *)a1;
- (char)beginAccess_nowait:(long long)a0 error:(id *)a1;
- (char)depersonalize:(id *)a0;
- (id)devnodesForDiskImageID:(id)a0 error:(id *)a1;
- (char)endAccess:(long long)a0 error:(id *)a1;
- (char)endAccess_nowait:(long long)a0 error:(id *)a1;
- (char)graft:(id *)a0;
- (char)graftOrMount:(id *)a0;
- (id)integrityCatalogPath;
- (char)isGrafted;
- (char)isGraftedPath:(id)a0;
- (char)isPersonalizedManifestStaged:(long long *)a0;
- (char)mapToExclaves:(id *)a0;
- (void)personalize:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (char)personalize:(id)a0 error:(id *)a1;
- (void)recordAssetGraftStateForEarlyBootTask:(char)a0;
- (char)ungraft:(id *)a0;
- (char)ungraftOrUnmount:(id *)a0;
- (char)unmapFromExclaves:(id *)a0;

@end
