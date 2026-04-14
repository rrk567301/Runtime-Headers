@interface TSCH3DChartElementSceneObjectProcessGeometryOnlyItems : TSCH3DChartElementSceneObjectProcessItems

- (void)dealloc;
- (BOOL)useBoundsGeometry;
- (BOOL)geometryOnly;
- (void)processDelayedItemsWithOpacity:(float)a0;
- (BOOL)processEnumeratorSeries:(id)a0;
- (void)processElementInfo:(id)a0 eachValue:(BOOL)a1;

@end
