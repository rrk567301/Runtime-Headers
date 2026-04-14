@interface TSCHChartSeriesTypeScatter : TSCHChartSeriesType

- (id)init;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (BOOL)supportsGridPartitioning;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSymbolDrawing;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (BOOL)supportsLineTypeNone;
- (BOOL)supportsLineConnectionStyle;
- (BOOL)supportsValueLabelsSeriesName;
- (BOOL)supportsValueLabelsAxisOption;
- (id)userInterfaceName;
- (id)axisTypesForValueLabels;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsDownsampling;
- (BOOL)supportsFillSetFill;
- (id)g_genericToSpecificPropertyMapScatter;

@end
