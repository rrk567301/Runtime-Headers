@interface SHKCopyToPasteboardSharingService : SHKSharingService

- (BOOL)isEnabled;
- (id)init;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (void)copyItemProvider:(id)a0 toPasteboard:(id)a1;
- (void)copyItemsToPasteboard:(id)a0 completion:(id /* block */)a1;

@end
