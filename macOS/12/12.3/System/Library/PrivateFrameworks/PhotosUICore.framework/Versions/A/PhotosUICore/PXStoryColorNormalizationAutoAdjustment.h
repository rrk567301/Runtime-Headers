@protocol PXDisplayAsset;

@interface PXStoryColorNormalizationAutoAdjustment : PXStoryColorNormalizationAdjustment

@property (retain, nonatomic) id<PXDisplayAsset> asset;

- (void).cxx_destruct;
- (id)adjustmentSummary;
- (BOOL)isEqualToDisplayAssetAdjustment:(id)a0;
- (id)applyToImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

@end
