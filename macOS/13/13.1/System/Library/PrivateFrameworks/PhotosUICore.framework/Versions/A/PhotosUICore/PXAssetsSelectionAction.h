@class PXPhotosDataSource, PXSelectionSnapshot;
@protocol PXFastEnumeration;

@interface PXAssetsSelectionAction : PXPhotosAction

@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedAssets;

- (void).cxx_destruct;
- (id)initWithSelectionSnapshot:(id)a0;
- (void)enumerateSelectedAssetIndexSetsUsingBlock:(id /* block */)a0;

@end
