@class NSColor, CALayer;

@interface AppStoreKit.BaseView : NSView {
    void /* unknown type, empty encoding */ _allowsVibrancy;
    void /* unknown type, empty encoding */ backgroundStyle;
    void /* unknown type, empty encoding */ backgroundGradientLayer;
    void /* unknown type, empty encoding */ backgroundVisualEffectView;
    void /* unknown type, empty encoding */ roundedCorners;
}

@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutFrame;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) BOOL opaque;
@property (nonatomic, retain) NSColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL continuousCorners;
@property (nonatomic, retain) CALayer *borderLayer;
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
