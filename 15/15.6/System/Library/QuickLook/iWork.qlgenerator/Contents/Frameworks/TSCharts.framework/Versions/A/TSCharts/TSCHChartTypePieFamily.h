@interface TSCHChartTypePieFamily : TSCH2DChartType

- (Class)repClass;
- (char)explosionAffectsChartBodyBounds;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (char)layoutFrameShouldEncloseInfoGeometry;
- (char)shouldChangeExplosionWithPreviousChartType:(id)a0 chartInfo:(id)a1 seriesList:(id)a2;
- (char)supportsAxisLabelAngle;

@end
