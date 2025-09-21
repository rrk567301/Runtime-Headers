@interface TSCHChartSeriesTypeLine : TSCHChartSeriesType

- (id)init;
- (unsigned long long)valueDimensions;
- (int)legendBadgeType;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapLine;
- (id)genericToSpecificPropertyMap;
- (id)propertiesForReferenceColors;
- (int)seriesElementType;
- (char)supportsDownsampling;
- (char)supportsFillSetFill;
- (char)supportsLineConnectionStyle;
- (char)supportsSeriesFill;
- (char)supportsSymbolDrawing;
- (char)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;

@end
