@interface _NSTouchBarColorPickerSliderKnob : NSView {
    id _autounbinder;
}

@property BOOL minimized;
@property BOOL pressed;

+ (id)keyPathsForValuesAffectingAlignmentRectInsets;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (oneway void)release;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)isAccessibilityElement;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)_autounbinder;
- (BOOL)wantsLayer;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)a0;

@end
