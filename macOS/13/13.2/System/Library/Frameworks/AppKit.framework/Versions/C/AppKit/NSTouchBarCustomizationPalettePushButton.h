@class NSTextField, NSString, NSAttributedString, NSColor;

@interface NSTouchBarCustomizationPalettePushButton : NSControl <NSAccessibilityButton> {
    NSTextField *_titleField;
    id _autounbinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isHighlighted) BOOL highlighted;
@property (readonly) double _labelFontSize;
@property (readonly, copy) NSColor *_labelTextColor;
@property (readonly, copy) NSColor *_bezelBackgroundColor;
@property (readonly, copy) NSAttributedString *_labelFontAttributedString;
@property (copy) NSString *title;
@property double paletteScaleFactor;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (id)buttonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)keyPathsForValuesAffecting_labelFontSize;
+ (id)keyPathsForValuesAffecting_labelFontAttributedString;

- (oneway void)release;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (BOOL)allowsVibrancy;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformPress;
- (id)_autounbinder;
- (BOOL)wantsLayer;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)_accessibilityDisplayOptionsDidChange:(id)a0;

@end
