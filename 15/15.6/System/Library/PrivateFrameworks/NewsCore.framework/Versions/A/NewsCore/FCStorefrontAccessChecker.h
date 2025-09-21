@class FCPrivateChannelMembershipController;

@interface FCStorefrontAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (void).cxx_destruct;
- (char)canSynchronouslyCheckAccessToItem:(id)a0;
- (char)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;
- (id)initWithPrivateChannelMembershipController:(id)a0;

@end
