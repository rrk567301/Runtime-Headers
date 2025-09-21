@class CKContainer, NSBundle, CKDatabase;

@interface WFRemoteQuarantinePolicyManager : NSObject

@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSBundle *localPolicyBundle;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)policyString;
- (id)localizedString:(id)a0;
- (unsigned long long)policyVersion;
- (void)updatePolicyWithXPCActivity:(id)a0 completionHandler:(id /* block */)a1;
- (char)deleteAssetBundlesExceptAssetWithIdentifier:(id)a0 error:(id *)a1;
- (id)latestRemotePolicyAssetBundle;
- (char)persistAssetToDisk:(id)a0 error:(id *)a1;
- (id)policyAssetBundle;
- (id)policyStringForBundleIfValid:(id)a0;
- (id)prepareDirectoryForAssetWithIdentifier:(id)a0 error:(id *)a1;
- (char)processAsset:(id)a0 error:(id *)a1;

@end
