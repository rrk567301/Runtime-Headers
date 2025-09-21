@interface TSCHChartFeatureLine : TSCHChartFeatureCategory

- (id)categoryLabelPositioner;
- (id)defaultDataFileName;
- (int)deprecated3DShadowSpecificProperty;
- (id)genericToSpecificPropertyMap;
- (int)labelOrientation;
- (double)maxDepthRatio;
- (Class)presetImagerClass;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (id)supportedAxisScales;
- (char)supportsConnectingLines;
- (char)supportsElementChunking;
- (char)supportsInterSetDepthGap;
- (char)supportsSymbolOverhang;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
