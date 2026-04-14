@interface WebCookieObserverAdapter : NSObject {
    struct WeakPtr<WebCore::CookieStorageObserver, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } observer;
}

- (void).cxx_destruct;
- (id)initWithObserver:(void *)a0;
- (id).cxx_construct;
- (void)cookiesChangedNotificationHandler:(id)a0;

@end
