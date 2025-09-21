@interface TSCH3DChartPieFamilySceneObject : TSCH3DChartElementSceneObject

+ (id)chartSeriesType;
+ (Class)propertiesClass;
+ (float)calculateHalfAngleForSeries:(id)a0;
+ (id)createBoundsForSeries:(id)a0;
+ (id)createGeometryWithStartAngle:(float)a0 endAngle:(float)a1 bevel:(char)a2 bevelEdges:(char)a3;
+ (id)createMeshForSeries:(id)a0;
+ (float)geometrySpaceRadius;
+ (id)p_boundsDataBufferWithDepthFactor:(float)a0 angleRange:(void *)a1 includeEndPoints:(char)a2;
+ (unsigned long long)p_boundsStepsForAngle:(double)a0;
+ (id)p_wholePieBounds;
+ (char)shouldCreateMeshSeriesStorage;
+ (id)wholePieBoundsResource;

- (Class)chartBoundsLayoutSceneDelegateClass;
- (float)explosionAtElementIndex:(void *)a0 forScene:(id)a1;
- (Class)getBounds3DClass;
- (void)renderLabelsSceneObject:(id)a0 pipeline:(id)a1 enumerator:(id)a2 properties:(id)a3;
- (Class)resizer3DClass;
- (void)setExplosion:(float)a0 atElementIndex:(void *)a1 forScene:(id)a2;
- (char)shouldRenderEachValue;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (char)transparencyDepthMask;
- (void)updateElementEffectsStates:(id)a0 depthToWidthRatio:(float)a1;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 depth:(float)a3 percentOfTotal:(float)a4;

@end
