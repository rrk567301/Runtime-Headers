@interface _NSThemeWidgetCell : NSButtonCell {
    long long _buttonID;
    BOOL _hasRollover;
    BOOL _isObscured;
    BOOL _temporarilyDisabled;
}

@property (nonatomic) BOOL temporarilyDisabled;
@property (nonatomic) BOOL canBeEnabled;
@property (getter=isObscured) BOOL obscured;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)update;
- (BOOL)isEnabled;
- (id)accessibilityAttributeNames;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityHelp;
- (id)accessibilityTitleAttribute;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)wantsUpdateLayerInView:(id)a0;
- (void)updateLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)layoutLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (int)_vibrancyBlendModeForControlView:(id)a0;
- (BOOL)_accessibilityIsZoomButtonID;
- (id)_accessibilityWindowDelegate;
- (BOOL)_accessibilityZoomButtonHasFullscreenBehavior;
- (id)_realWindow;
- (id)_containingThemeFrameFromView:(id)a0;
- (BOOL)isEdited;
- (id)coreUIPresentationState;
- (id)coreUIState;
- (id)coreUIValue;
- (id)coreUIWindowType;
- (id)coreUIWidgetType;
- (id)coreUIDrawOptionsInView:(id)a0 isFlipped:(BOOL)a1;
- (void)coreUIDrawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (long long)buttonID;
- (void)setButtonID:(long long)a0;
- (unsigned long long)_currentWindowButton;
- (id)_currentCustomImageForWindowButton:(unsigned long long)a0 view:(id)a1;
- (void)_drawCustomImage:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (int)getState:(id)a0;

@end
