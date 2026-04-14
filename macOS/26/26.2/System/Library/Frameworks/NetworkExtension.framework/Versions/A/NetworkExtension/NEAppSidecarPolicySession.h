@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject {
    NEPolicySession *_policySession;
    NSMutableArray *_policyIDList;
}

+ (id)connectionIdentifier;

- (void).cxx_destruct;
- (id)init;
- (BOOL)installPolicies;
- (BOOL)uninstallPolicies;

@end
