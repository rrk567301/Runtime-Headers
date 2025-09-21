@class MCMUserIdentity;

@interface MCMXPCMessageReferencesQuery : MCMXPCMessageWithOwnersAndGroupsBase <MCMParametersReferencesQuery>

@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) char createDuringReconciliation;
@property (readonly, nonatomic) char deleteDuringReconciliation;
@property (readonly, nonatomic) char yesReallyApplyToAll;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
