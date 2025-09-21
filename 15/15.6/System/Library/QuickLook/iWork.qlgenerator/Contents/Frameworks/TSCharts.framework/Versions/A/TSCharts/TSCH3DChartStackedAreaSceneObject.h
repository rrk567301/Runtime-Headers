@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject

+ (id)chartSeriesType;
+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (float)depthLimitFactorForSeriesCount:(long long)a0 maxLimitingSeries:(long long)a1;
+ (char)supportsChartSeriesDepthOffset;

- (float)depthForScene:(id)a0;
- (void)sortElements:(id *)a0 pipeline:(id)a1;
- (char)transparencyDepthMask;

@end
