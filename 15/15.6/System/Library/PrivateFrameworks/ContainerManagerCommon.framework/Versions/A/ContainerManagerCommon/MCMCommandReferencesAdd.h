@class NSSet, MCMUserIdentity;

@interface MCMCommandReferencesAdd : MCMCommand <MCMParametersWithOwnersAndGroups, MCMParametersReferencesQuery>

@property (readonly, nonatomic) unsigned long long containerClass;
@property (readonly, nonatomic) NSSet *ownerIdentifiers;
@property (readonly, nonatomic) NSSet *groupIdentifiers;
@property (readonly, nonatomic) unsigned long long explicitFlags;
@property (readonly, nonatomic) unsigned int uid;
@property (readonly, nonatomic) unsigned long long privateFlags;
@property (readonly, nonatomic) char createDuringReconciliation;
@property (readonly, nonatomic) char deleteDuringReconciliation;
@property (readonly, nonatomic) char yesReallyApplyToAll;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void).cxx_destruct;
- (void)execute;
- (id)_resolveUserIdentity;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (char)preflightClientAllowed;

@end
