@interface TSCHChartFeatureMixed : TSCHChartFeatureCategory

- (char)supportsEditing;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (char)supportsConnectingLines;
- (char)supportsGroupedShadows;
- (char)supportsIndividualShadowRendering;
- (char)supportsMultipleSeriesTypes;
- (char)supportsSymbolOverhang;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
