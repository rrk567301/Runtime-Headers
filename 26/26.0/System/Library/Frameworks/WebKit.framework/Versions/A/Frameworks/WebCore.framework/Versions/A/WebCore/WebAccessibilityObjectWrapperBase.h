@interface WebAccessibilityObjectWrapperBase : NSObject {
    struct WeakPtr<WebCore::AccessibilityObject, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_axObject;
    struct WeakPtr<WebCore::AXIsolatedObject, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_isolatedObject;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } m_isolatedObjectInitialized;
}

@property (nonatomic) struct Markable<WTF::ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::MarkableTraits<WTF::ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>>> { struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } identifier;

+ (void)accessibilitySetShouldRepostNotifications:(BOOL)a0;

- (void)detach;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityCustomContent;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (id)innerHTML;
- (id)outerHTML;
- (id)attachmentView;
- (id)_accessibilityWebDocumentView;
- (id)accessibilityMathPrescriptPairs;
- (void)attachAXObject:(void *)a0;
- (void *)axBackingObject;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (void)accessibilityPostedNotification:(id)a0;
- (void)accessibilityPostedNotification:(id)a0 userInfo:(id)a1;
- (id)ariaLandmarkRoleDescription;
- (void)attachIsolatedObject:(void *)a0;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilityResolvedEditingStyles;
- (id)baseAccessibilitySpeechHint;
- (void *)baseUpdateBackingStore;
- (struct CGPath { } *)convertPathToScreenSpace:(const void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a0 space:(int)a1;
- (void)detachIsolatedObject:(int)a0;
- (BOOL)hasIsolatedObject;
- (id)initWithAccessibilityObject:(void *)a0;
- (BOOL)isIsolatedObject;
- (id)lineRectsAndText;
- (void *)updateObjectBackingStore;

@end
