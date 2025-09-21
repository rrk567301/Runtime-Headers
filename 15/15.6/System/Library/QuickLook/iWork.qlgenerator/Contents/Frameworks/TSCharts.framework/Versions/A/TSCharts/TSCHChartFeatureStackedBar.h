@interface TSCHChartFeatureStackedBar : TSCHChartFeatureBar

- (char)supportsCategoryAxisSeriesNames;
- (id)defaultDataFileName;
- (char)drawValueLabelsForZero;
- (char)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (double)maxDepthRatio;
- (Class)presetImagerClass;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)stackingSignRule;
- (id)supportedAxisScales;
- (char)supportsReferenceLines;
- (char)supportsSeriesLabels;
- (char)supportsTrendLines;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
