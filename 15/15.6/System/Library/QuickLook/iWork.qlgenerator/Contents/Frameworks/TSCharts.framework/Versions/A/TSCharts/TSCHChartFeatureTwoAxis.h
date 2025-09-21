@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory

- (int)representativeGridValueAxisType;
- (char)supportsEditing;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (char)requiresYAxisOrdinal;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (char)supportsConnectingLines;
- (char)supportsGroupedShadows;
- (char)supportsIndividualShadowRendering;
- (char)supportsMultipleSeriesTypes;
- (char)supportsReferenceLines;
- (char)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
