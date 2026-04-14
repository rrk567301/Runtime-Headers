@interface TSCHChartPieAxis : TSCHChartStackedPercentValueAxis

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)a0;
- (BOOL)supportsFormattedStringForInvalidValue;
- (id)formattedStringForSeries:(id)a0 groupIndex:(unsigned long long)a1;
- (double)totalForGroupIndex:(unsigned long long)a0;
- (BOOL)supportsAxisValueLabels;
- (BOOL)usesPercentNumberFormatPropertyForSeriesDataFormatting;

@end
