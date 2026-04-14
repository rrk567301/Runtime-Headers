@interface TSCHChartSeriesTypeColumn : TSCHChartSeriesTypeBar

- (id)init;
- (BOOL)isVertical;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (int)seriesElementType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (BOOL)useInBarGapCalculations;
- (BOOL)supportsSetGap;
- (BOOL)supportsBarGap;
- (BOOL)supportsRoundedCorners;
- (id)legalChartLabelPositions;
- (id)userInterfaceNameForLabelPosition:(id)a0;
- (unsigned int)adjustLabelPosition:(unsigned int)a0 forAxisValue:(double)a1 intercept:(double)a2;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)userInterfaceName;
- (id)axisTypesForValueLabels;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsDownsampling;
- (id)g_genericToSpecificPropertyMapColumn;

@end
