@interface TSCHChartFeatureBar : TSCHChartFeatureCategory

- (BOOL)isHorizontal;
- (id)valueLabelPositioner;
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
- (int)representativeGridValueAxisType;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (id)initWithChartType:(id)a0;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;

@end
