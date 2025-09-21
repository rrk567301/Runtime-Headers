@class NSValue, TSCH3DChartLayout;

@interface TSCH3DChartLayoutSceneSettingsUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    TSCH3DChartLayout *_chartLayout;
    char _isMutatedForSceneSettings;
    NSValue *_infoGeometryOffset;
}

@property (nonatomic) char hasConstantDepth;

- (void)dealloc;
- (void).cxx_destruct;
- (id)containingViewportByResizingScene:(id)a0 toResizingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mutateInfoWithContainingViewport:(id)a0 scene:(id)a1;
- (struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })oldLayoutSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a0;
- (void)updateInfoGeometryIfNecessary;
- (void)upgradeForSpice:(char)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

@end
