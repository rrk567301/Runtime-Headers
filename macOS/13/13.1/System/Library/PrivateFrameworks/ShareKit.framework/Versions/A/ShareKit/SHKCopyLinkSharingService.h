@interface SHKCopyLinkSharingService : SHKSharingService

- (id)init;
- (BOOL)isEnabled;
- (BOOL)canPerformWithItems:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (void)performWithItems:(id)a0;
- (void)_createAndCopyLinkWithItems:(id)a0 completion:(id /* block */)a1;
- (void)_copyLinkToPasteboard:(id)a0 completion:(id /* block */)a1;

@end
