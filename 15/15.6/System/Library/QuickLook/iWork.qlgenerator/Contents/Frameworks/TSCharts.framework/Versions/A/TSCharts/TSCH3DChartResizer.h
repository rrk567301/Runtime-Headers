@class TSCH3DChartBoundsLayout, TSCH3DChartScenePropertyAccessor, TSCH3DChartType, TSCH3DScene;

@interface TSCH3DChartResizer : NSObject {
    TSCH3DChartBoundsLayout *_layout;
    TSCH3DChartType *_chartType;
    TSCH3DScene *_scene;
    TSCH3DChartScenePropertyAccessor *_accessor;
    struct ResizeData { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } size; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } delta; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } steps; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } unrotatedSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartOnlySize; } _previous;
    struct ResizeData { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } size; struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } scale; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } delta; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } steps; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } unrotatedSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } chartOnlySize; } _current;
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _target;
    unsigned long long _index;
    struct { char forceOmitLegend; char forceOmitTitle; char forceOmitAxisTitle; char forceOmitLabelPlacement; char forceTitleAtTop; char forceLegendAtBottom; char enable3DTightBounds; char enable3DScaledDepthBounds; long long maxDepthRatioType; unsigned long long max3DLimitingSeries; } _layoutSettings;
}

@property (nonatomic) float minStep;
@property (nonatomic) float precision;

+ (float)minimumSize;
+ (float)perspectiveness;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(void *)a0;
+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(void *)a0 forScene:(id)a1;
+ (id)resizerWithLayout:(id)a0 chartType:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setScale:(void *)a0;
- (float)step;
- (float)minScale;
- (void)loop;
- (void)setStep:(float)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(void *)a0;
- (float)perspectiveness;
- (char)resize1;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(void *)a0 by:(float)a1;
- (void)adjustContainingViewport;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjustedScale;
- (char)allConverges;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })canImprove;
- (char)checkImprovement;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })clamp:(void *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })clampDepthRatio:(void *)a0;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportFromCurrentSize;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })containingViewportFromSize:(void *)a0;
- (float)containingViewportThreshold;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })converges;
- (char)currentCanImprove;
- (id)initWithLayout:(id)a0 chartType:(id)a1;
- (void)initializeResizing:(void *)a0;
- (float)maxDepthRatio;
- (void)readjustContainingViewport;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })resize:(void *)a0 startingSize:(void *)a1;
- (void)seedResizeCondition;
- (void)setContainingViewport:(void *)a0;
- (void)updateResizeData;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateResizerFromRequestedSize:(void *)a0 startingSize:(void *)a1;
- (void)updateSteps;

@end
