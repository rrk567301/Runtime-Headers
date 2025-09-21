@interface SHKCopyToPasteboardSharingService : SHKSharingService

- (id)init;
- (char)isEnabled;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (char)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)copyItemProvider:(id)a0 toPasteboard:(id)a1;
- (void)copyItemsToPasteboard:(id)a0 completion:(id /* block */)a1;

@end
