@class CHDChart;

@interface EDChartSheet : EDSheet {
    CHDChart *mMainChart;
    BOOL mIsBoundsSet;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)teardown;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addDrawable:(id)a0;
- (BOOL)areBoundsSet;
- (id)mainChart;
- (void)setMainChart:(id)a0;

@end
