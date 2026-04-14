@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter

- (BOOL)supportsSharedAndSeparateX;
- (id)genericToSpecificPropertyMap;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedSeriesTypes;
- (BOOL)supportsEditingForAxisID:(id)a0;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsBubbleOptions;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)a0;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (BOOL)supportsShowLabelsInFrontOption;
- (id)filteredStyleOwnersFromStyleOwners:(id)a0;
- (id)initWithChartType:(id)a0;

@end
