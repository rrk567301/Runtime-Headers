@interface _NSThemeFullScreenButtonCell : NSButtonCell

- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (unsigned long long)bezelStyle;
- (long long)interiorBackgroundStyle;
- (id)accessibilityTitleAttribute;
- (id)_controlContentStyleInView:(id)a0;
- (long long)_interiorContentPresentationStateInView:(id)a0;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (long long)_interiorContentStateInView:(id)a0;
- (BOOL)_hasRolloverContentArt;

@end
