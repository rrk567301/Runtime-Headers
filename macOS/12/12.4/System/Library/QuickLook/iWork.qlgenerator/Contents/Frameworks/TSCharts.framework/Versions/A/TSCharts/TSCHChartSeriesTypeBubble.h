@interface TSCHChartSeriesTypeBubble : TSCHChartSeriesTypeScatter

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillSetFillProperty;
- (BOOL)supportsFillSetFill;
- (int)fillPropertyType;
- (unsigned long long)valueDimensions;
- (id)axisTypesForValueLabels;
- (id)legalChartLabelPositions;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (id)elementBuilder;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSymbolTypeEditing;
- (BOOL)supportsLineConnectionStyle;
- (id)userInterfaceName;
- (int)defaultSymbolType;
- (id)supportedValueLabelsAxisCombinations;
- (int)seriesStrokeProperty;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)g_genericToSpecificPropertyMapBubble;

@end
