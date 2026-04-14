@interface TSCH3DChartStackedColumnSceneObject : TSCH3DChartColumnSceneObject

+ (BOOL)isStacked;
+ (BOOL)isHorizontalChart;
+ (id)chartSeriesType;

- (void)sortElements:(id *)a0 pipeline:(id)a1;

@end
