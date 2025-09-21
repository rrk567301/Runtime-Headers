@class NSColor;

@interface LUI2TintView : NSView

@property (getter=isEnabled) char enabled;
@property (retain) NSColor *enabledColor;
@property (retain) NSColor *disabledColor;
@property (nonatomic) char usesDarkAppearance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)_setupTintView;

@end
