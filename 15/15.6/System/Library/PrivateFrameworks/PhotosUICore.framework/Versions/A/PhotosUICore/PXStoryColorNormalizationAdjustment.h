@class NSString, PFStoryRecipeDisplayAssetNormalization, PIColorNormalizationFilter, NSData;

@interface PXStoryColorNormalizationAdjustment : NSObject <PXGDisplayAssetAdjustment> {
    NSData *_colorCubeData;
}

@property (readonly, nonatomic) PIColorNormalizationFilter *filter;
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *normalization;
@property (nonatomic) char useFalseColor;
@property (nonatomic) char useColorCube;
@property (nonatomic) double intensity;
@property (readonly, nonatomic) NSString *adjustmentSummary;
@property (readonly, nonatomic) NSString *adjustmentDetails;
@property (readonly, nonatomic) char allowsUnadjustedOpportunisticDelivery;
@property (readonly, nonatomic) char wantsSingleHighQualityDelivery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dummyAdjustment;
+ (id)_falseColorMatrixParameters;
+ (id)autoAdjustmentForAsset:(id)a0;
+ (id)colorCubeForNormalization:(id)a0 targetColorSpace:(struct CGColorSpace { } *)a1;
+ (id)dummyNormalization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)applyToImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)contentModeForProposedContentMode:(long long)a0;
- (id)initWithNormalization:(id)a0;
- (id)initWithNormalizationFilter:(id)a0;
- (char)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
