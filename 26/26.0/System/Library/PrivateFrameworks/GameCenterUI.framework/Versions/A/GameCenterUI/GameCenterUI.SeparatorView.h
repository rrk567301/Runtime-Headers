@class NSColor;

@interface GameCenterUI.SeparatorView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ style;
}

@property (class, nonatomic, readonly) double separatorHeight;

@property (nonatomic, retain) NSColor *lineColor;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
