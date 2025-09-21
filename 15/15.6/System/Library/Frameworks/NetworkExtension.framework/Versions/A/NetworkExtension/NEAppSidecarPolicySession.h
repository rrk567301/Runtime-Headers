@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject {
    NEPolicySession *_policySession;
    NSMutableArray *_policyIDList;
}

+ (id)connectionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (char)installPolicies;
- (char)uninstallPolicies;

@end
