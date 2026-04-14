@interface TSCHChartTypeLine : TSCH2DChartType

- (id)name;
- (id)init;
- (id)defaultSeriesType:(unsigned long long)a0;
- (BOOL)supportsCategoryAxisPlotToEdgesOption;
- (BOOL)supportsSeriesFill;
- (id)userInterfaceName;
- (long long)userInterfaceTag;

@end
