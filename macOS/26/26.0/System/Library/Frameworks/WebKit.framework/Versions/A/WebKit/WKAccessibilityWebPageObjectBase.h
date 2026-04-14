@class NSData;

@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct WeakPtr<WebKit::WebPage, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_page;
    struct Markable<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::MarkableTraits<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>>> { struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } m_pageID;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_cacheLock;
    struct FloatPoint { float m_x; float m_y; } m_position;
    struct IntSize { int m_width; int m_height; } m_size;
    struct ThreadSafeWeakPtr<WebCore::AXIsolatedTree, WTF::NoTaggingTraits<WebCore::AXIsolatedTree>> { struct TaggedPtr<WebCore::AXIsolatedTree, WTF::NoTaggingTraits<WebCore::AXIsolatedTree>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } m_isolatedTree;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_windowLock;
    struct WeakObjCPtr<id> { id m_weakReference; } m_window;
    struct IntPoint { int m_x; int m_y; } m_remoteFrameOffset;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_parentLock;
    struct RetainPtr<id> { id m_ptr; } m_parent;
    struct RetainPtr<NSData> { NSData *m_ptr; } m_remoteToken;
    BOOL m_hasMainFramePlugin;
    struct optional<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>> { union { char __null_state_; struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } __val_; } ; BOOL __engaged_; } m_frameID;
}

- (void)setSize:(const struct IntSize { int x0; int x1; } *)a0;
- (void)setWindow:(id)a0;
- (void)setPosition:(const struct FloatPoint { float x0; float x1; } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityRootObjectWrapper:(void *)a0;
- (unsigned long long)remoteTokenHash;
- (void)_buildIsolatedTreeIfNeeded;
- (id)accessibilityPluginObject;
- (struct IntPoint { int x0; int x1; })accessibilityRemoteFrameOffset;
- (id)accessibilityRootObjectWrapper;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache *x0; })axObjectCache;
- (void)enableAccessibilityForAllProcesses;
- (void *)focusedLocalFrame;
- (void)setFrameIdentifier:(const void *)a0;
- (void)setHasMainFramePlugin:(BOOL)a0;
- (void)setIsolatedTree:(void *)a0;
- (void)setRemoteFrameOffset:(struct IntPoint { int x0; int x1; })a0;
- (void)setRemoteParent:(id)a0 token:(id)a1;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;

@end
