@interface TSCHChartFeatureColumn : TSCHChartFeatureCategory

- (char)supportsCategoryAxisSeriesNames;
- (id)categoryLabelPositioner;
- (id)columnShapeUIName;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (id)genericToSpecificPropertyMap;
- (int)labelOrientation;
- (double)maxDepthRatio;
- (Class)presetImagerClass;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (id)supportedAxisScales;
- (char)supportsColumnShape;
- (char)supportsElementChunking;
- (char)supportsGroupedShadows;
- (char)supportsSeriesLabels;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
