@interface _NSThemeWidgetCell : NSButtonCell {
    long long _buttonID;
    char _hasRollover;
    char _isObscured;
    char _temporarilyDisabled;
}

@property (nonatomic) char temporarilyDisabled;
@property (nonatomic) char canBeEnabled;
@property (getter=isObscured) char obscured;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEnabled;
- (id)accessibilityActionDescription:(id)a0;
- (char)_accessibilityIsZoomButtonID;
- (id)_accessibilityWindowDelegate;
- (char)_accessibilityZoomButtonHasFullscreenBehavior;
- (id)_containingThemeFrameFromView:(id)a0;
- (id)_currentCustomImageForWindowButton:(unsigned long long)a0 view:(id)a1;
- (unsigned long long)_currentWindowButton;
- (void)_drawCustomImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (char)_needRedrawOnWindowChangedKeyState;
- (id)_realWindow;
- (int)_vibrancyBlendModeForControlView:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityHelp;
- (char)accessibilityIsDescriptionAttributeSettable;
- (char)accessibilityIsFocusedAttributeSettable;
- (char)accessibilityIsSubroleAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitleAttribute;
- (long long)buttonID;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)coreUIDrawOptionsInView:(id)a0 isFlipped:(char)a1;
- (void)coreUIDrawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)coreUIPresentationState;
- (id)coreUIState;
- (id)coreUIValue;
- (id)coreUIWidgetType;
- (id)coreUIWindowType;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (int)getState:(id)a0;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (char)isEdited;
- (void)layoutLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setButtonID:(long long)a0;
- (void)update;
- (void)updateLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (char)wantsUpdateLayerInView:(id)a0;

@end
