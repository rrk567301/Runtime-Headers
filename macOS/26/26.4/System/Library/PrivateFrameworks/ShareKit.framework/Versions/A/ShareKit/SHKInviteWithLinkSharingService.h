@interface SHKInviteWithLinkSharingService : SHKSharingService

- (BOOL)isEnabled;
- (id)init;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)copyLinkToPasteboard:(id)a0 completion:(id /* block */)a1;

@end
