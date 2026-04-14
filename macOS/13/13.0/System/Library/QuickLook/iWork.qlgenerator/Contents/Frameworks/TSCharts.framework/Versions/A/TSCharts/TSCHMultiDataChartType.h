@interface TSCHMultiDataChartType : TSCH2DChartType

+ (id)g_genericToSpecificPropertyMapCategoryAxis;

- (Class)repClass;
- (BOOL)isMultiData;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsTrendLines;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsErrorBars;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsValueLabelSpacing;
- (unsigned long long)maxCellsForInsert;
- (id)cellsCreatedWarning;
- (id)p_genericToSpecificPropertyMap;

@end
