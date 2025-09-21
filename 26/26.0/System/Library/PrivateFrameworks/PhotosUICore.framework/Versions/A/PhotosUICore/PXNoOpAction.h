@interface PXNoOpAction : PXAction

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;

@end
