@class NSColor, NSView, NSColorDisplayView;

@interface _NSTouchBarColorPickerSwatch : NSView {
    NSView *_borderView;
    NSColorDisplayView *_colorView;
}

@property (copy) NSColor *color;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;

@end
