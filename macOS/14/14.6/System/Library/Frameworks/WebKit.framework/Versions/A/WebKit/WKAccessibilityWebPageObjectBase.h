@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct NakedPtr<WebKit::WebPage> { struct WebPage *m_ptr; } m_page;
    struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long m_identifier; } m_pageID;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_cacheLock;
    struct FloatPoint { float m_x; float m_y; } m_position;
    struct IntSize { int m_width; int m_height; } m_size;
    struct ThreadSafeWeakPtr<WebCore::AXCoreObject> { struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; struct AXCoreObject *m_objectOfCorrectType; } m_isolatedTreeRoot;
    struct RetainPtr<id> { void *m_ptr; } m_parent;
    BOOL m_hasMainFramePlugin;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setSize:(const struct IntSize { int x0; int x1; } *)a0;
- (void)setPosition:(const struct FloatPoint { float x0; float x1; } *)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityPluginObject;
- (id)accessibilityRootObjectWrapper;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache *x0; })axObjectCache;
- (void)setHasMainFramePlugin:(BOOL)a0;
- (void)setIsolatedTreeRoot:(struct NakedPtr<WebCore::AXCoreObject> { struct AXCoreObject *x0; })a0;
- (void)setRemoteParent:(id)a0;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;

@end
