@interface NSThemeAutosaveButtonCell : NSButtonCell {
    BOOL _mouseInside;
    float _defaultLineHeight;
}

- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (long long)interiorBackgroundStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)performClick:(id)a0;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (void)setFont:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_textAttributes;
- (id)_controlContentStyleInView:(id)a0;
- (long long)_interiorContentPresentationStateInView:(id)a0;
- (void)drawImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (struct CGSize { double x0; double x1; })_minCellSizeWithCompressionOptions:(id)a0;
- (long long)_interiorContentStateInView:(id)a0;
- (void)_setMouseInside:(BOOL)a0;
- (BOOL)_hasRolloverContentArt;
- (BOOL)_subclassOverridesDrawImage;

@end
