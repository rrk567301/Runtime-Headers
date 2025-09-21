@interface PXDeleteAssetsAction : PXDestructiveAssetsAction

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;

@end
