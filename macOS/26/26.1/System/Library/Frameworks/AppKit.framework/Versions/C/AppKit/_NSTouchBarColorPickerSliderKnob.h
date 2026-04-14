@interface _NSTouchBarColorPickerSliderKnob : NSView {
    id _autounbinder;
}

@property BOOL minimized;
@property BOOL pressed;

+ (id)keyPathsForValuesAffectingAlignmentRectInsets;
+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (BOOL)isAccessibilityElement;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (oneway void)release;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)accessibilitySetValueAttribute:(id)a0;
- (id)_autounbinder;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValueAttribute;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;

@end
