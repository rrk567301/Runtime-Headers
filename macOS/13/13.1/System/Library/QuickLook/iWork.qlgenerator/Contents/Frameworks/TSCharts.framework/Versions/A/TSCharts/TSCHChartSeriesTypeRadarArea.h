@interface TSCHChartSeriesTypeRadarArea : TSCHChartSeriesTypeArea

- (id)elementBuilder;
- (id)genericToSpecificPropertyMap;
- (int)legendBadgeType;
- (id)legendFillForSeries:(id)a0;
- (BOOL)supportsUseSeriesStrokeColorForFill;
- (BOOL)supportsLineConnectionStyle;
- (id)p_axisForSeries:(id)a0 isCategory:(BOOL)a1;
- (id)axisTypesForValueLabels;
- (BOOL)supportsDownsampling;
- (id)additionalFillSetMutations;
- (id)g_genericToSpecificPropertyMapRadarArea;

@end
