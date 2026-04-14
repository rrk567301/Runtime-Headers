@interface TSCHChartSeriesTypeArea : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (int)seriesElementType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (int)legendBadgeType;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;
- (BOOL)supportsDownsampling;
- (id)g_genericToSpecificPropertyMapArea;

@end
