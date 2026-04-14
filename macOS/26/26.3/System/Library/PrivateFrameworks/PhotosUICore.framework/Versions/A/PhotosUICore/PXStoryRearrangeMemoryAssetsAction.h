@class PHAsset, PXStoryModel;
@protocol PXFastEnumeration;

@interface PXStoryRearrangeMemoryAssetsAction : PXPhotosAction

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly, nonatomic) id<PXFastEnumeration> movedAssets;
@property (readonly, nonatomic) PHAsset *targetAsset;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (id)initWithModel:(id)a0 movedAssets:(id)a1 beforeAsset:(id)a2;

@end
