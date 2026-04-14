@interface WebAccessibilityObjectWrapperBase : NSObject {
    void *m_axObject;
    void *m_isolatedObject;
    BOOL m_isolatedObjectInitialized;
}

@property (nonatomic) struct ObjectIdentifier<WebCore::AXIDType> { unsigned long long m_identifier; } identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (id).cxx_construct;
- (void)detach;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (id)accessibilityCustomContent;
- (id)innerHTML;
- (id)outerHTML;
- (id)attachmentView;
- (id)initWithAccessibilityObject:(void *)a0;
- (void)attachAXObject:(void *)a0;
- (void)attachIsolatedObject:(void *)a0;
- (BOOL)hasIsolatedObject;
- (void)detachIsolatedObject:(int)a0;
- (void *)updateObjectBackingStore;
- (void *)axBackingObject;
- (BOOL)isIsolatedObject;
- (id)baseAccessibilitySpeechHint;
- (id)baseAccessibilityHelpText;
- (struct CGPath { } *)convertPathToScreenSpace:(const void *)a0;
- (id)_accessibilityWebDocumentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a0 space:(int)a1;
- (id)contentForSimpleRange:(const void *)a0 attributed:(BOOL)a1;
- (void *)baseUpdateBackingStore;
- (id)lineRectsAndText;
- (id)ariaLandmarkRoleDescription;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (id)baseAccessibilityResolvedEditingStyles;
- (void)accessibilityPostedNotification:(id)a0;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;

@end
