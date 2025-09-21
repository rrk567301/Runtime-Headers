@interface TSCHChartSeriesTypeBubble : TSCHChartSeriesTypeScatter

- (id)init;
- (unsigned long long)valueDimensions;
- (int)legendBadgeType;
- (id)axisTypesForValueLabels;
- (int)defaultSymbolType;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (int)fillSetFillProperty;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapBubble;
- (id)genericToSpecificPropertyMap;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)legalChartLabelPositions;
- (id)propertiesForReferenceColors;
- (int)seriesStrokeProperty;
- (id)supportedValueLabelsAxisCombinations;
- (char)supportsFillSetFill;
- (char)supportsLineConnectionStyle;
- (char)supportsSeriesStroke;
- (char)supportsSymbolTypeEditing;
- (id)userInterfaceName;

@end
