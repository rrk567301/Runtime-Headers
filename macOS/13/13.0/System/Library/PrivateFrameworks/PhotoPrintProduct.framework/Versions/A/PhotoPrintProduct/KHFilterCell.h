@class NSColor, NSString;

@interface KHFilterCell : NSButton <NSAccessibilityRadioButton>

@property (retain, nonatomic) NSColor *buttonBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setState:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityValue;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)createTrackingArea;

@end
