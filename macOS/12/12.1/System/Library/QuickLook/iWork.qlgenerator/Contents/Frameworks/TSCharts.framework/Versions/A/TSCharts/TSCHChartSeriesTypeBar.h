@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType

- (id)init;
- (BOOL)isVertical;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (unsigned int)adjustLabelPosition:(unsigned int)a0 forAxisValue:(double)a1 intercept:(double)a2;
- (BOOL)useInBarGapCalculations;
- (unsigned long long)valueDimensions;
- (id)axisTypesForValueLabels;
- (id)legalChartLabelPositions;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsDownsampling;
- (id)elementBuilder;
- (BOOL)supportsSetGap;
- (BOOL)supportsBarGap;
- (BOOL)supportsRoundedCorners;
- (id)userInterfaceNameForLabelPosition:(id)a0;
- (BOOL)chunkedBuildsIncludeInterceptValues;
- (id)userInterfaceName;
- (id)supportedValueLabelsAxisCombinations;
- (id)g_genericToSpecificPropertyMapBar;

@end
