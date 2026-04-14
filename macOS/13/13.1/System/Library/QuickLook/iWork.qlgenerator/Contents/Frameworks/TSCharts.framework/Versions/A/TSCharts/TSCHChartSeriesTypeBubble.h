@interface TSCHChartSeriesTypeBubble : TSCHChartSeriesTypeScatter

- (id)init;
- (id)fillPropertyTypeName;
- (int)fillPropertyType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (id)legalChartLabelPositions;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (int)legendBadgeType;
- (id)propertiesForReferenceColors;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSymbolTypeEditing;
- (BOOL)supportsLineConnectionStyle;
- (id)userInterfaceName;
- (int)defaultSymbolType;
- (id)axisTypesForValueLabels;
- (id)supportedValueLabelsAxisCombinations;
- (int)seriesStrokeProperty;
- (int)fillSetFillProperty;
- (BOOL)supportsFillSetFill;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)g_genericToSpecificPropertyMapBubble;

@end
