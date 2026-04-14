@interface TSCHChartFeatureStackedArea : TSCHChartFeatureArea

- (double)maxDepthRatio;
- (BOOL)supportsReferenceLines;
- (BOOL)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (BOOL)reverseSingleColumnLegendOrder;
- (BOOL)drawValueLabelsForZero;
- (BOOL)supportsTrendLines;
- (BOOL)supportsSymbolOverhang;
- (int)stackingSignRule;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (BOOL)supportsInterSetDepthGap;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;

@end
