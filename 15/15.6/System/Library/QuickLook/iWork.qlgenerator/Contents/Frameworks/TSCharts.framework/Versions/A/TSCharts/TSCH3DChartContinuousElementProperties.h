@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {
    unsigned long long _maxLimitingSeries;
}

@property (readonly, nonatomic) float p_sageInterSetDepthGapProperty;
@property (readonly, nonatomic) long long seriesCount;
@property (readonly, nonatomic) float depthLimitFactor;
@property (readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)updateLabels;
- (char)applyElementTransform:(void *)a0 series:(id)a1 index:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a2 propertyAccessor:(id)a3;
- (float)chartMinZForScene:(id)a0;
- (float)depthForScene:(id)a0;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (void)resetWithEnumerator:(id)a0 layoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a1;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })seriesSize;

@end
