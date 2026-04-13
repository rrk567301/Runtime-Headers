@class NSColor, JUTraitCollection;

@interface GameCenterUI.BaseView : NSView {
    void /* unknown type, empty encoding */ backgroundStyle;
    void /* unknown type, empty encoding */ backgroundGradientLayer;
    void /* unknown type, empty encoding */ backgroundVisualEffectView;
    void /* unknown type, empty encoding */ roundedCorners;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic, readonly) BOOL allowsVibrancy;
@property (nonatomic) void /* unknown type, empty encoding */ clipsToBounds;
@property (nonatomic) BOOL opaque;
@property (nonatomic) void /* unknown type, empty encoding */ layoutMargins;
@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } jet_layoutFrame;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic) void /* unknown type, empty encoding */ cornerRadius;
@property (nonatomic) void /* unknown type, empty encoding */ continuousCorners;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ borderLayer;
@property (nonatomic, retain) void /* unknown type, empty encoding */ borderColor;
@property (nonatomic) void /* unknown type, empty encoding */ borderWidth;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
