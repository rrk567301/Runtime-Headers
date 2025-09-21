@class NSString;

@interface PXStorySmartGradientAdjustment : NSObject <PXGDisplayAssetAdjustment>

@property (nonatomic) char useSmartColor;
@property (nonatomic) char useSimpleBlur;
@property (nonatomic) double simpleBlurRadius;
@property (nonatomic) double simpleBlurExposure;
@property (nonatomic) char simpleBlurRepeatEdges;
@property (nonatomic) double simpleBlurEdgeStretch;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedSourceRect;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) char allowsUnadjustedOpportunisticDelivery;
@property (readonly, nonatomic) char wantsSingleHighQualityDelivery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)applyToImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (long long)contentModeForProposedContentMode:(long long)a0;
- (char)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
