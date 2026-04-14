@interface GameStoreKit.UpsellGridView : NSView <AMSUIDynamicContentViewProtocol> {
    void /* unknown type, empty encoding */ primaryIcon;
    void /* unknown type, empty encoding */ remainingIcons;
    void /* unknown type, empty encoding */ artworkLoader;
    void /* unknown type, empty encoding */ impressionsCalculator;
    void /* unknown type, empty encoding */ iconViews;
    void /* unknown type, empty encoding */ isCompactSheet;
    void /* unknown type, empty encoding */ wantsExtendedHeightAdjustment;
    void /* unknown type, empty encoding */ wantsScaledIcons;
    void /* unknown type, empty encoding */ iconScaleFactor;
    void /* unknown type, empty encoding */ amsImpressionItems;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)impressionItems;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
