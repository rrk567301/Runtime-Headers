@interface SHKManageSharedFolderSharingService : SHKSharingService

- (id)init;
- (BOOL)isEnabled;
- (BOOL)canPerformWithItems:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (void)performWithItems:(id)a0;
- (void)_launchManageUIForSharedFolderWithItems:(id)a0 completion:(id /* block */)a1;
- (void)_launchManageUIForFileURL:(id)a0 completion:(id /* block */)a1;

@end
