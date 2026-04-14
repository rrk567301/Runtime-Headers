@class FCPrivateChannelMembershipController;

@interface FCIssueDraftAccessChecker : FCAccessChecker

@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (void)checkAccessToItem:(id)a0 withQualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldShowAllDraftContent;
- (BOOL)canSynchronouslyCheckAccessToItem:(id)a0;
- (id)initWithPrivateChannelMembershipController:(id)a0;
- (BOOL)hasAccessToItem:(id)a0 blockedReason:(unsigned long long *)a1 error:(id *)a2;

@end
