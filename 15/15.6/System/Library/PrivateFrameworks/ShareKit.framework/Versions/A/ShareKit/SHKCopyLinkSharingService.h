@interface SHKCopyLinkSharingService : SHKSharingService

- (id)init;
- (char)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (char)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)_copyLinkToPasteboard:(id)a0 completion:(id /* block */)a1;
- (void)_createAndCopyLinkWithItems:(id)a0 completion:(id /* block */)a1;

@end
