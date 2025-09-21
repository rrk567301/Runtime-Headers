@class NSColor;

@interface SiriUIButton : NSButton {
    NSColor *_titleColor;
    NSColor *_highligtTitleColor;
    double highlightAlpha;
}

@property (retain) NSColor *defaultBackgroundColor;
@property (retain) NSColor *hoverBackgroundColor;
@property (nonatomic, setter=setIsHovered:) char isHovered;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } imageEdgeInsets;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } titleEdgeInsets;
@property (nonatomic) char highlightsOnHover;

+ (Class)cellClass;
+ (id)buttonWithImageTemplate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setTitle:(id)a0;
- (void)_commonInit;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleColor:(id)a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setHighlightTitleColor:(id)a0;

@end
