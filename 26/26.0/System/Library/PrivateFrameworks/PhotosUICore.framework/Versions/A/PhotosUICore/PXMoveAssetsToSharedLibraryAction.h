@class NSArray;

@interface PXMoveAssetsToSharedLibraryAction : PXAssetsAction {
    NSArray *_suggestedAssets;
}

- (id)actionIdentifier;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;
- (id)localizedActionName;

@end
