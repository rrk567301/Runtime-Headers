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

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)mouseUp:(id)a0;
- (oneway void)release;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (void)dealloc;
- (void)mouseDragged:(id)a0;
- (void)mouseDown:(id)a0;
- (id)_labelTextColor;
- (void)_accessibilityDisplayOptionsDidChange:(id)a0;
- (id)_autounbinder;
- (BOOL)accessibilityPerformPress;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;

@end
