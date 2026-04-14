@class ABCNGroupIdentifier;

@interface ABCNGroupMembershipPredicate : ABCNPredicate

@property (readonly, copy) ABCNGroupIdentifier *groupIdentifier;

- (void)dealloc;
- (id)initWithGroupIdentifier:(id)a0;
- (id)cn_coreDataPredicate;

@end
