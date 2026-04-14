@interface TSCHChartFeatureColumn : TSCHChartFeatureCategory

- (id)categoryLabelPositioner;
- (double)maxDepthRatio;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsElementChunking;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (int)labelOrientation;
- (Class)stageClass;
- (BOOL)supportsColumnShape;
- (id)columnShapeUIName;
- (BOOL)supportsCategoryAxisSeriesNames;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;

@end
