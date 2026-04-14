@interface TSCH3DChartPieFamilySceneObject : TSCH3DChartElementSceneObject

+ (BOOL)shouldCreateMeshSeriesStorage;
+ (Class)propertiesClass;
+ (id)chartSeriesType;
+ (id)createBoundsForSeries:(id)a0;
+ (id)createMeshForSeries:(id)a0;
+ (float)geometrySpaceRadius;
+ (id)createGeometryWithStartAngle:(float)a0 endAngle:(float)a1 bevel:(BOOL)a2 bevelEdges:(BOOL)a3;
+ (float)calculateHalfAngleForSeries:(id)a0;
+ (unsigned long long)p_boundsStepsForAngle:(double)a0;
+ (id)p_boundsDataBufferWithDepthFactor:(float)a0 angleRange:(const void *)a1 includeEndPoints:(BOOL)a2;
+ (id)p_wholePieBounds;
+ (id)wholePieBoundsResource;

- (BOOL)shouldRenderEachValue;
- (BOOL)transparencyDepthMask;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 depth:(float)a3 percentOfTotal:(float)a4;
- (float)explosionAtElementIndex:(const void *)a0 forScene:(id)a1;
- (void)setExplosion:(float)a0 atElementIndex:(const void *)a1 forScene:(id)a2;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (Class)resizer3DClass;
- (Class)getBounds3DClass;

@end
