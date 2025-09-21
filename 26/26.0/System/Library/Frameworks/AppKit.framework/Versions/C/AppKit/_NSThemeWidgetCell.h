@class NSWindow;

@interface _NSThemeWidgetCell : NSButtonCell {
    unsigned char _isObscured : 1;
    unsigned char _temporarilyDisabled : 1;
    unsigned char _canBeEnabled : 1;
}

@property (nonatomic) BOOL temporarilyDisabled;
@property (nonatomic) BOOL canBeEnabled;
@property (getter=isObscured) BOOL obscured;
@property (readonly) NSWindow *_realWindow;
@property (readonly) long long widgetType;
@property long long buttonID;

+ (Class)_visualProviderClassForBezelConfiguration:(id)a0;
+ (Class)bezelConfigurationClass;

- (BOOL)isEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)update;
- (id)accessibilityActionDescription:(id)a0;
- (BOOL)_accessibilityIsZoomButtonID;
- (id)_accessibilityWindowDelegate;
- (BOOL)_accessibilityZoomButtonHasFullscreenBehavior;
- (long long)_bezelInteractionStateForControlInteractionState:(long long)a0;
- (long long)_bezelPresentationStateInView:(id)a0;
- (id)_containingThemeFrameFromView:(id)a0;
- (BOOL)_hasKeyAppearanceInView:(id)a0;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityHelp;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitleAttribute;
- (id)bezelConfigurationInView:(id)a0;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (BOOL)isEdited;
- (void)mouseEnteredOrExited;
- (long long)windowType;

@end
