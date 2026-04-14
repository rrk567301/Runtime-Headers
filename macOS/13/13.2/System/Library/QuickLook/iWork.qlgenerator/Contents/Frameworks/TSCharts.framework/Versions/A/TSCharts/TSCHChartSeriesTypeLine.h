@interface TSCHChartSeriesTypeLine : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (int)seriesElementType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (BOOL)supportsLineConnectionStyle;
- (id)userInterfaceName;
- (BOOL)supportsDownsampling;
- (BOOL)supportsFillSetFill;
- (id)g_genericToSpecificPropertyMapLine;

@end
