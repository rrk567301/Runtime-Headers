@interface TSCHChartFeaturePieFamily : TSCHChartFeature

- (unsigned long long)maxCellsToCheckForGridValueType;
- (BOOL)supportsMultipleValuesPerSeries;
- (BOOL)supportsReferenceLines;
- (BOOL)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsTrendLines;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBorderStroke;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsPercentNumberFormatting;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (BOOL)supportsErrorBars;
- (BOOL)hasFixedFrameRatio;
- (BOOL)rendersBackgroundAxis;
- (BOOL)hasExplodableSeriesElements;
- (BOOL)rendersUsingRadialGeometry;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (int)representativeGridValueAxisType;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (BOOL)supportsStartAngleRotation;
- (id)initWithChartType:(id)a0;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;

@end
