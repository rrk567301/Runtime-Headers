@class CKContainer, NSBundle, CKDatabase;

@interface WFRemoteQuarantinePolicyManager : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSBundle *localPolicyBundle;

+ (id)sharedManager;

- (unsigned long long)policyVersion;
- (id)init;
- (void).cxx_destruct;
- (id)policyString;
- (id)localizedString:(id)a0;
- (void)updatePolicyWithXPCActivity:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)deleteAssetBundlesExceptAssetWithIdentifier:(id)a0 error:(id *)a1;
- (id)latestRemotePolicyAssetBundle;
- (BOOL)persistAssetToDisk:(id)a0 error:(id *)a1;
- (id)policyAssetBundle;
- (id)policyStringForBundleIfValid:(id)a0;
- (id)prepareDirectoryForAssetWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)processAsset:(id)a0 error:(id *)a1;

@end
