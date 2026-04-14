@interface WebAccessibilityObjectWrapperBase : NSObject {
    void *m_axObject;
    void *m_isolatedObject;
}

@property (nonatomic) struct ObjectIdentifier<WebCore::AXIDType> { unsigned long long m_identifier; } identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (void)detach;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (id)innerHTML;
- (id)outerHTML;
- (id)attachmentView;
- (void)attachIsolatedObject:(void *)a0;
- (void)detachIsolatedObject:(int)a0;
- (id)initWithAccessibilityObject:(void *)a0;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;
- (void)attachAXObject:(void *)a0;
- (void *)axBackingObject;
- (void *)updateObjectBackingStore;
- (void *)baseUpdateBackingStore;
- (id)contentForSimpleRange:(const void *)a0 attributed:(BOOL)a1;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (BOOL)isIsolatedObject;
- (id)baseAccessibilityDescription;
- (id)baseAccessibilitySpeechHint;
- (id)baseAccessibilityHelpText;
- (struct CGPath { } *)convertPathToScreenSpace:(const void *)a0;
- (id)_accessibilityWebDocumentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { BOOL x0; BOOL x1; float x2; float x3; } x1; } *)a0 space:(int)a1;
- (id)lineRectsAndText;
- (id)ariaLandmarkRoleDescription;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (id)baseAccessibilityResolvedEditingStyles;
- (void)accessibilityPostedNotification:(id)a0;

@end
