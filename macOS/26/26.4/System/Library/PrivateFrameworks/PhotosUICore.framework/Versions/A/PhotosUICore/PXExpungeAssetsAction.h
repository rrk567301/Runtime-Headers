@interface PXExpungeAssetsAction : PXDestructiveAssetsAction {
    long long _source;
}

- (id)actionIdentifier;
- (void)executeWithUndoManager:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAssets:(id)a0 record:(id)a1;
- (id)initWithAssets:(id)a0 record:(id)a1 source:(long long)a2;

@end
