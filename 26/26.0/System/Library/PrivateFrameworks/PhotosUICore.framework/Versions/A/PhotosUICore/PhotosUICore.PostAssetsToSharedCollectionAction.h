@class NSString;

@interface PhotosUICore.PostAssetsToSharedCollectionAction : PXAssetsAction {
    void /* unknown type, empty encoding */ sharedCollection;
    void /* unknown type, empty encoding */ comment;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSString *actionNameLocalizationKey;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithAssets:(id)a0;

@end
