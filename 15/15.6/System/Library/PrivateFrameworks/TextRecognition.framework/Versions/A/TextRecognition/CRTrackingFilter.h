@interface CRTrackingFilter : NSObject

+ (void)filterLowQualityTranscriptRegions:(id)a0;
+ (char)shouldEdgeIntersectionFilterQuad:(id)a0 originalQuad:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
+ (char)shouldFilterHomographyWithResultQuad:(id)a0 originalQuad:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
+ (char)shouldStartTrackingGroup:(id)a0;
+ (char)shouldStartTrackingRegion:(id)a0;

@end
