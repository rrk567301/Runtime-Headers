@interface TSCHChartSeriesTypeArea : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (unsigned long long)valueDimensions;
- (int)seriesElementType;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsDownsampling;
- (BOOL)supportsSymbolDrawing;
- (id)elementBuilder;
- (int)legendBadgeType;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;
- (id)g_genericToSpecificPropertyMapArea;

@end
