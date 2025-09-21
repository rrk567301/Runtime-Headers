@interface TSCHMultiDataChartType : TSCH2DChartType

+ (id)g_genericToSpecificPropertyMapCategoryAxis;

- (Class)repClass;
- (id)cellsCreatedWarning;
- (id)genericToSpecificPropertyMap;
- (char)isMultiData;
- (unsigned long long)maxCellsForInsert;
- (id)p_genericToSpecificPropertyMap;
- (char)supportsConnectingLines;
- (char)supportsErrorBars;
- (char)supportsGroupedShadows;
- (char)supportsSeriesShadow;
- (char)supportsTrendLines;
- (char)supportsValueLabelSpacing;

@end
