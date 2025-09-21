@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {
    struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } infoChartScale; struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } containingViewport; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartBodyLayoutOffsetInChartAreaLayoutSpace; struct CGSize { double width; double height; } layoutSize; struct CGSize { double width; double height; } requestLayoutSize; struct CGSize { double width; double height; } chartBodyLayoutSize; struct CGSize { double width; double height; } requestChartBodyLayoutSize; struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } modelSize; struct { char forceOmitLegend; char forceOmitTitle; char forceOmitAxisTitle; char forceOmitLabelPlacement; char forceTitleAtTop; char forceLegendAtBottom; char enable3DTightBounds; char enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } layoutSettings; char forcedValid; } _values;
}

@property (readonly, nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } infoChartScale;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } containingViewport;
@property (readonly, nonatomic) TSCH3DVector *containingViewportVector;
@property (readonly, nonatomic) struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } layoutSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } requestLayoutSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } chartBodyLayoutSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } requestChartBodyLayoutSize;
@property (readonly, nonatomic) struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } modelSize;
@property (readonly, nonatomic) struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; } layoutSettings;
@property (readonly, nonatomic) char forcedValid;

+ (id)cacheWithCacheValues:(const void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)values;
- (id)initWithCacheValues:(const void *)a0;
- (void)printDebug;

@end
