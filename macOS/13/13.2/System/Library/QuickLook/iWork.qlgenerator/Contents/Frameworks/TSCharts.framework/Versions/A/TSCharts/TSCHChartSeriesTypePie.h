@interface TSCHChartSeriesTypePie : TSCHChartSeriesType

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (id)legalChartLabelPositions;
- (id)userInterfaceNameForLabelPosition:(id)a0;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0 forSeries:(id)a1;
- (id)genericToSpecificPropertyMap;
- (int)legendBadgeType;
- (BOOL)supportsValueLabelsSeriesName;
- (id)userInterfaceName;
- (id)axisTypesForValueLabels;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsCalloutLines;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)seriesFillLabelUIString;
- (id)g_genericToSpecificPropertyMapPie;
- (BOOL)floatValueForLabelExplosion:(float *)a0 series:(id)a1;

@end
