@class NSColor, NSView, NSColorDisplayView;

@interface _NSTouchBarColorPickerSwatch : NSView {
    NSView *_borderView;
    NSColorDisplayView *_colorView;
}

@property (copy) NSColor *color;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityRole;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)dealloc;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;

@end
