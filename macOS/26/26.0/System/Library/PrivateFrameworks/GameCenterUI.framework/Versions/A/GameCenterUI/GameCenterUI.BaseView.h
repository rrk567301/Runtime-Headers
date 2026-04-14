@class NSColor, JUTraitCollection, CALayer;

@interface GameCenterUI.BaseView : NSView {
    void /* unknown type, empty encoding */ backgroundStyle;
    void /* unknown type, empty encoding */ backgroundGradientLayer;
    void /* unknown type, empty encoding */ backgroundVisualEffectView;
    void /* unknown type, empty encoding */ roundedCorners;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) BOOL allowsVibrancy;
@property (nonatomic) BOOL opaque;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } jet_layoutFrame;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic) BOOL continuousCorners;
@property (nonatomic, readonly) CALayer *borderLayer;
@property (nonatomic, retain) NSColor *borderColor;
@property (nonatomic) double borderWidth;

- (BOOL)isOpaque;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
