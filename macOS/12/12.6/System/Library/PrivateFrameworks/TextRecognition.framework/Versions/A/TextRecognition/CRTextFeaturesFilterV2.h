@class NSString;
@protocol CRSingleTextFeatureFiltering;

@interface CRTextFeaturesFilterV2 : NSObject <CRTextFeaturesFiltering>

@property (retain) NSString *preferredLocale;
@property (retain) id<CRSingleTextFeatureFiltering> latinLowConfidenceFilter;
@property (retain) id<CRSingleTextFeatureFiltering> chineseLowConfidenceFilter;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)filterFeatures:(id)a0;
- (id)filterBlocks:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)_filterForFeature:(id)a0;
- (id)_imageSpaceGeometryForTextFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_pointInImageSpace:(struct CGPoint { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (double)_distanceFromPoint1:(struct CGPoint { double x0; double x1; })a0 toPoint2:(struct CGPoint { double x0; double x1; })a1;

@end
