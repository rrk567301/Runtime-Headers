@interface TSCHChartFeatureMixed : TSCHChartFeatureCategory

- (id)genericToSpecificPropertyMap;
- (id)userInterfaceName;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsEditing;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsIndividualShadowRendering;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;

@end
