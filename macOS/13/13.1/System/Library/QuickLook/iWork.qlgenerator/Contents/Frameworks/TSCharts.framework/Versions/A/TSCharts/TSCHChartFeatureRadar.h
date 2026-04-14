@interface TSCHChartFeatureRadar : TSCHChartFeature

- (Class)presetImagerClass;
- (id)supportedAxisScales;
- (id)defaultDataFileName;
- (BOOL)supportsBorderFrame;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (BOOL)supportsAxisNames;
- (BOOL)supportsEllipticalGridlines;
- (BOOL)supportsCategoryLabelExplosion;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;
- (BOOL)hasFixedFrameRatio;
- (int)representativeGridValueAxisType;
- (BOOL)supportsStartAngleRotation;
- (id)initWithChartType:(id)a0;
- (BOOL)isNonSquareChartsEnabled;

@end
