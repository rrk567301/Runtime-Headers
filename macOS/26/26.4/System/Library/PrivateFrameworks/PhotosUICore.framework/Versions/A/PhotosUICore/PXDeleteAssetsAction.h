@interface PXDeleteAssetsAction : PXDestructiveAssetsAction {
    long long _source;
}

- (id)actionIdentifier;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithAssets:(id)a0 record:(id)a1;
- (id)initWithAssets:(id)a0 record:(id)a1 source:(long long)a2;

@end
