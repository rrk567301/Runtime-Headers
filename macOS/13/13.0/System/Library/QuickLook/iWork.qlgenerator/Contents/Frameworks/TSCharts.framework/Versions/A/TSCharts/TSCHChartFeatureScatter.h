@interface TSCHChartFeatureScatter : TSCHChartFeature

- (BOOL)supportsSharedAndSeparateX;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (BOOL)supportsSymbolOverhang;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)a0;
- (int)representativeGridValueAxisType;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (id)initWithChartType:(id)a0;

@end
