@interface TSCHChartFeatureStackedArea : TSCHChartFeatureArea

- (id)defaultDataFileName;
- (char)drawValueLabelsForZero;
- (char)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (double)maxDepthRatio;
- (Class)presetImagerClass;
- (char)reverseSingleColumnLegendOrder;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)stackingSignRule;
- (id)supportedAxisScales;
- (char)supportsInterSetDepthGap;
- (char)supportsReferenceLines;
- (char)supportsSymbolOverhang;
- (char)supportsTrendLines;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
