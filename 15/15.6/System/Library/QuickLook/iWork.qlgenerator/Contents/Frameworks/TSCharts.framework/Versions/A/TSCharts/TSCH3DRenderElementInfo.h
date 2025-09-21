@class TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline, TSCHChartSeries, TSCH3DChartElementProperties;

@interface TSCH3DRenderElementInfo : NSObject <NSCopying>

@property (readonly, retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline;
@property (readonly, retain, nonatomic) TSCH3DChartElementProperties *properties;
@property (readonly, retain, nonatomic) TSCHChartSeries *series;
@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } index;
@property (readonly, nonatomic) char useBoundsGeometry;
@property (nonatomic) char twoPasses;
@property (nonatomic) char transparent;
@property (readonly, nonatomic) char geometryOnly;
@property (readonly, retain, nonatomic) TSCH3DRenderProcessor *processor;

+ (id)infoWithPipeline:(id)a0 properties:(id)a1 series:(id)a2 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a3 useBoundsGeometry:(char)a4 twoPasses:(char)a5 transparent:(char)a6 geometryOnly:(char)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPipeline:(id)a0 properties:(id)a1 series:(id)a2 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a3 useBoundsGeometry:(char)a4 twoPasses:(char)a5 transparent:(char)a6 geometryOnly:(char)a7;

@end
