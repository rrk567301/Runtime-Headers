@interface GameStoreKit.SeparatorSupplementaryView : NSView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ separator;
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ lineColor;
}

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillMoveToSuperview:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
