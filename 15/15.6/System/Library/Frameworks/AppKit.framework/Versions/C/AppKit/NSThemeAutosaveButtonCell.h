@interface NSThemeAutosaveButtonCell : NSButtonCell {
    char _mouseInside;
    float _defaultLineHeight;
}

- (id)_textAttributes;
- (id)_buttonContentStyleInView:(id)a0;
- (char)_hasRolloverContentArt;
- (long long)_interiorContentPresentationStateInView:(id)a0;
- (long long)_interiorContentStateInView:(id)a0;
- (void)_setMouseInside:(char)a0;
- (char)_subclassOverridesDrawImage;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityDescriptionAttribute;
- (char)accessibilityIsChildrenAttributeSettable;
- (char)accessibilityIsDescriptionAttributeSettable;
- (char)accessibilityIsFocusedAttributeSettable;
- (char)accessibilityIsTitleAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)interiorBackgroundStyle;
- (void)performClick:(id)a0;
- (void)setFont:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
