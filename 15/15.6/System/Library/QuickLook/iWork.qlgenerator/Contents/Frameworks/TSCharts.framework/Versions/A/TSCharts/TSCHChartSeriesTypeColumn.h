@interface TSCHChartSeriesTypeColumn : TSCHChartSeriesTypeBar

- (id)init;
- (char)isVertical;
- (unsigned long long)valueDimensions;
- (unsigned int)adjustLabelPosition:(unsigned int)a0 forAxisValue:(double)a1 intercept:(double)a2;
- (id)axisTypesForValueLabels;
- (char)chunkedBuildsIncludeInterceptValues;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapColumn;
- (id)genericToSpecificPropertyMap;
- (id)legalChartLabelPositions;
- (int)seriesElementType;
- (id)supportedValueLabelsAxisCombinations;
- (char)supportsBarGap;
- (char)supportsDownsampling;
- (char)supportsRoundedCorners;
- (char)supportsSetGap;
- (char)useInBarGapCalculations;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)a0;

@end
