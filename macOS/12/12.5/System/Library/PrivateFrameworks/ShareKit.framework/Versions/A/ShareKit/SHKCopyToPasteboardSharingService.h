@interface SHKCopyToPasteboardSharingService : SHKSharingService

- (id)init;
- (BOOL)isEnabled;
- (void)performWithItems:(id)a0;
- (BOOL)canPerformWithItems:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (void)copyItemProvider:(id)a0 toPasteboard:(id)a1;
- (void)copyItemsToPasteboard:(id)a0;

@end
