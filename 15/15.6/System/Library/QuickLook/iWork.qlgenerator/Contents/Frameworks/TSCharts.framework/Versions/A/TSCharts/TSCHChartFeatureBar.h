@interface TSCHChartFeatureBar : TSCHChartFeatureCategory

- (char)isHorizontal;
- (int)representativeGridValueAxisType;
- (char)supportsCategoryAxisSeriesNames;
- (id)categoryLabelPositioner;
- (id)columnShapeUIName;
- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (id)genericToSpecificPropertyMap;
- (id)initWithChartType:(id)a0;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a1;
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
- (id)valueLabelPositioner;

@end
