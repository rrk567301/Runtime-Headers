@class NSTextField, NSString, NSStackView, NSAttributedString, _NSTouchBarCustomizationPaletteCheckboxBox;

@interface NSTouchBarCustomizationPaletteCheckbox : NSControl <NSAccessibilityCheckBox> {
    _NSTouchBarCustomizationPaletteCheckboxBox *_box;
    NSTextField *_titleField;
    NSStackView *_stackView;
    id _autounbinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isHighlighted) BOOL highlighted;
@property (readonly) double _labelFontSize;
@property (readonly) double _stackViewSpacing;
@property (readonly, copy) NSAttributedString *_labelFontAttributedString;
@property (getter=isChecked) BOOL checked;
@property (copy) NSString *title;
@property double paletteScaleFactor;

+ (id)checkboxWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)keyPathsForValuesAffecting_labelFontAttributedString;
+ (id)keyPathsForValuesAffecting_labelFontSize;
+ (id)keyPathsForValuesAffecting_stackViewSpacing;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityValue;
- (oneway void)release;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)_labelTextColor;
- (void)_accessibilityDisplayOptionsDidChange:(id)a0;
- (id)_autounbinder;
- (BOOL)accessibilityPerformPress;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;

@end
