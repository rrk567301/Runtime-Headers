@interface WKMenuTarget : NSObject {
    struct WeakPtr<WebKit::WebContextMenuProxyMac, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _menuProxy;
}

+ (id)sharedMenuTarget;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)forwardContextMenuAction:(id)a0;
- (void *)menuProxy;
- (void)setMenuProxy:(void *)a0;

@end
