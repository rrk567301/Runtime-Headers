@interface TSCHChartFeatureStackedColumn : TSCHChartFeatureColumn

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
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsTrendLines;
- (int)stackingSignRule;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (BOOL)supportsCategoryAxisSeriesNames;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;

@end
