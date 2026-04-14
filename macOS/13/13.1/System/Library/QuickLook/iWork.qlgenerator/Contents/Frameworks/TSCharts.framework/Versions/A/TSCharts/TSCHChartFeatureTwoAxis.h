@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory

- (BOOL)supportsReferenceLines;
- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)requiresYAxisOrdinal;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsEditing;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsIndividualShadowRendering;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (id)initWithChartType:(id)a0;

@end
