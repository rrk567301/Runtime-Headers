@class ABCNGroupIdentifier;

@interface ABCNGroupMembershipPredicate : ABCNPredicate

@property (readonly, copy) ABCNGroupIdentifier *groupIdentifier;

- (id)cn_coreDataPredicate;
- (void)dealloc;
- (id)initWithGroupIdentifier:(id)a0;

@end
