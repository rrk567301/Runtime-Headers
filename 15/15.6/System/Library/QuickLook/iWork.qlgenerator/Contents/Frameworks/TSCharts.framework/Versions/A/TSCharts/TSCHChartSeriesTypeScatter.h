@interface TSCHChartSeriesTypeScatter : TSCHChartSeriesType

- (id)init;
- (unsigned long long)valueDimensions;
- (int)legendBadgeType;
- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapScatter;
- (id)genericToSpecificPropertyMap;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (id)propertiesForReferenceColors;
- (id)supportedValueLabelsAxisCombinations;
- (char)supportsDownsampling;
- (char)supportsFillSetFill;
- (char)supportsGridPartitioning;
- (char)supportsLineConnectionStyle;
- (char)supportsLineTypeNone;
- (char)supportsSeriesFill;
- (char)supportsSymbolDrawing;
- (char)supportsSymbolFillForSymbolType:(int)a0;
- (char)supportsValueLabelsAxisOption;
- (char)supportsValueLabelsSeriesName;
- (id)userInterfaceName;

@end
