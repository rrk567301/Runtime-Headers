@interface TSCHChartFeaturePieFamily : TSCHChartFeature

- (char)supportsMultipleValuesPerSeries;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (int)representativeGridValueAxisType;
- (char)supportsPercentNumberFormatting;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (char)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (char)hasExplodableSeriesElements;
- (char)hasFixedFrameRatio;
- (id)initWithChartType:(id)a0;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a1;
- (char)rendersBackgroundAxis;
- (char)rendersUsingRadialGeometry;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (char)supportsBackgroundFill;
- (char)supportsBorderFrame;
- (char)supportsBorderStroke;
- (char)supportsCategoryLabelsInChartRangeEditor;
- (char)supportsElementSeriesNames;
- (char)supportsErrorBars;
- (char)supportsGroupedShadows;
- (char)supportsLabelExplosion;
- (char)supportsReferenceLines;
- (char)supportsStartAngleRotation;
- (char)supportsTrendLines;
- (char)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
