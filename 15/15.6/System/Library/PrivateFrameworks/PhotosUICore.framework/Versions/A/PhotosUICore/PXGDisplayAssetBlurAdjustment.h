@class NSString;

@interface PXGDisplayAssetBlurAdjustment : NSObject <PXGDisplayAssetAdjustment>

@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic) double darkeningOverlayOpacity;
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
- (id)initWithBlurRadius:(double)a0 darkeningOverlayOpacity:(double)a1;
- (char)isEqualToDisplayAssetAdjustment:(id)a0;
- (struct CGSize { double x0; double x1; })requestSizeForProposedTargetSize:(struct CGSize { double x0; double x1; })a0;

@end
