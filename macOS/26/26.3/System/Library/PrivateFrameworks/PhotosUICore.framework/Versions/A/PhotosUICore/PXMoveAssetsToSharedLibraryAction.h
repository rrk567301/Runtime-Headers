@class NSArray;

@interface PXMoveAssetsToSharedLibraryAction : PXAssetsAction {
    NSArray *_suggestedAssets;
}

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;
- (id)localizedActionName;

@end
