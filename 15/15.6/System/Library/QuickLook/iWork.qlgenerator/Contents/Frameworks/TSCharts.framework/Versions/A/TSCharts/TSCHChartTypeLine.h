@interface TSCHChartTypeLine : TSCH2DChartType

- (id)init;
- (id)name;
- (id)defaultSeriesType:(unsigned long long)a0;
- (char)supportsCategoryAxisPlotToEdgesOption;
- (char)supportsSeriesFill;
- (id)userInterfaceName;
- (long long)userInterfaceTag;

@end
