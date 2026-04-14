@class HMMTRFabric;

@interface HMMTRAccessControl : HMFObject

@property (weak) HMMTRFabric *fabric;
@property unsigned long long currentUserPrivilege;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)handleRegularUserAdded;
- (void)handleSharedAdminAdded;

@end
