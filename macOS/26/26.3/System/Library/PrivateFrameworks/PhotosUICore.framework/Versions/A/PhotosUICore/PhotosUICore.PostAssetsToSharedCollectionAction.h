@class NSString;

@interface PhotosUICore.PostAssetsToSharedCollectionAction : PXAssetsAction {
    void /* unknown type, empty encoding */ sharedCollection;
    void /* unknown type, empty encoding */ comment;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *actionNameLocalizationKey;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;

@end
