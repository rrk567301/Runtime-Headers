@interface PXMoveAssetsToPersonalLibraryAction : PXAssetsAction

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)localizedActionName;

@end
