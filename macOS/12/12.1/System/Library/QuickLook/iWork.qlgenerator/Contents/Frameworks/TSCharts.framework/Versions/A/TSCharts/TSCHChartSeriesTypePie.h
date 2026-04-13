@interface TSCHChartSeriesTypePie : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0 forSeries:(id)a1;
- (unsigned long long)valueDimensions;
- (id)axisTypesForValueLabels;
- (BOOL)supportsValueLabelsSeriesName;
- (BOOL)supportsCalloutLines;
- (id)legalChartLabelPositions;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (id)elementBuilder;
- (id)userInterfaceNameForLabelPosition:(id)a0;
- (int)legendBadgeType;
- (id)userInterfaceName;
- (id)supportedValueLabelsAxisCombinations;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)seriesFillLabelUIString;
- (id)g_genericToSpecificPropertyMapPie;
- (BOOL)floatValueForLabelExplosion:(float *)a0 series:(id)a1;

@end
