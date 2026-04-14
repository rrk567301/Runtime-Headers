@interface TSCHChartFeatureArea : TSCHChartFeatureCategory

- (id)categoryLabelPositioner;
- (double)maxDepthRatio;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (int)labelOrientation;
- (Class)stageClass;
- (BOOL)supportsInterSetDepthGap;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)deprecated3DShadowSpecificProperty;

@end
