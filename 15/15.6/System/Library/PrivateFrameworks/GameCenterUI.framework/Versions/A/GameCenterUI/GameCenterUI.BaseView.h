@class NSColor, JUTraitCollection;

@interface GameCenterUI.BaseView : NSView {
    void /* unknown type, empty encoding */ backgroundStyle;
    void /* unknown type, empty encoding */ backgroundGradientLayer;
    void /* unknown type, empty encoding */ backgroundVisualEffectView;
    void /* unknown type, empty encoding */ roundedCorners;
}

@property (nonatomic, readonly) char flipped;
@property (nonatomic, readonly) char wantsUpdateLayer;
@property (nonatomic, readonly) char allowsVibrancy;
@property (nonatomic) char opaque;
@property (nonatomic) void /* unknown type, empty encoding */ layoutMargins;
@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } jet_layoutFrame;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic) void /* unknown type, empty encoding */ continuousCorners;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ borderLayer;
@property (nonatomic, retain) void /* unknown type, empty encoding */ borderColor;
@property (nonatomic) void /* unknown type, empty encoding */ borderWidth;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)isOpaque;
- (void)updateLayer;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
