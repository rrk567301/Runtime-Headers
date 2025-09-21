@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject

+ (char)isStacked;
+ (id)chartSeriesType;
+ (char)isHorizontalChart;
+ (id)partWithEnumerator:(id)a0 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a1;

- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })labelObjectSpacePosition:(unsigned int)a0 axisValue:(double)a1 intercept:(double)a2;
- (void)updateLightingEffectsState:(id)a0 scene:(id)a1;

@end
