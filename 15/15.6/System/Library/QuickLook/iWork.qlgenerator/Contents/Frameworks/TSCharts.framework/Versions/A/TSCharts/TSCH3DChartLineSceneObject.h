@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

+ (id)chartSeriesType;
+ (float)chartSeriesDepth;
+ (id)createMeshForSeries:(id)a0;
+ (char)supportsChartSeriesDepthOffset;

- (struct EdgeDetectionParameters { char x0; char x1; float x2; })edgeDetectionParameters;
- (char)shouldRenderSeries:(id)a0;
- (void)updateTilingEffect:(void *)a0 properties:(id)a1 textureTiling:(id)a2 size:(void *)a3;

@end
