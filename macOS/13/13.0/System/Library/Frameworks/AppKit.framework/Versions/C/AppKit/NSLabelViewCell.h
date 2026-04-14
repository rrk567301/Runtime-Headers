@interface NSLabelViewCell : NSActionCell {
    long long _selectedParts;
    long long _focusedPart;
}

@property (readonly) long long numParts;
@property long long diskLabelValues;
@property unsigned long long imagePosition;
@property BOOL allowsMultipleSelection;
@property long long focusedPart;
@property long long hoveredPart;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityChildrenAttribute;
- (void)performClick:(id)a0;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityHelpStringForChild:(id)a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (void)accessibilitySetFocus:(id)a0 forChild:(id)a1;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (void)_commonInit;
- (id)accessibilityVisibleChildrenAttribute;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (void)mouseEntered:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)mouseExited:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (BOOL)_isSelectedPart:(long long)a0;
- (void)_selectPart:(long long)a0;
- (void)_deselectPart:(long long)a0;
- (void)_valueChanged:(id)a0;
- (long long)diskLabelValues;
- (void)setDiskLabelValues:(long long)a0;
- (BOOL)_isHoveredPart:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })part:(long long)a0 boundsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_labelAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForLabel:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_drawBackgroundForPartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPressedOrHovered:(BOOL)a1;
- (void)_drawPart:(long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_partAtPoint:(struct CGPoint { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_nameForLabelPart:(long long)a0;
- (id)_currentLabelName;
- (void)_handleMouseMovedForEvent:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (long long)numParts;
- (long long)focusedPart;
- (void)setFocusedPart:(long long)a0;
- (id)accessibilityDescriptionOfChild:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPart:(long long)a0;
- (void)accessibilityPerformAction:(id)a0 forChild:(id)a1;

@end
