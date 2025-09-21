@interface SHKInviteWithLinkSharingService : SHKSharingService

- (id)init;
- (char)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (char)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)copyLinkToPasteboard:(id)a0 completion:(id /* block */)a1;

@end
