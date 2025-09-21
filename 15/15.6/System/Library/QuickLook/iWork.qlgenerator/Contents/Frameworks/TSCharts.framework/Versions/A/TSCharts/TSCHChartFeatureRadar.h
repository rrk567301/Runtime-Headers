@interface TSCHChartFeatureRadar : TSCHChartFeature

- (int)representativeGridValueAxisType;
- (id)defaultDataFileName;
- (char)hasFixedFrameRatio;
- (id)initWithChartType:(id)a0;
- (char)isNonSquareChartsEnabled;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (char)supportsAxisNames;
- (char)supportsBorderFrame;
- (char)supportsCategoryLabelExplosion;
- (char)supportsConnectingLines;
- (char)supportsEllipticalGridlines;
- (char)supportsStartAngleRotation;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
