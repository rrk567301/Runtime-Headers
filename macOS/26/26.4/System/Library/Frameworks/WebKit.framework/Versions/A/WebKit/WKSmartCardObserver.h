@class TKSmartCard;

@interface WKSmartCardObserver : NSObject {
    struct RetainPtr<TKSmartCard> { TKSmartCard *m_ptr; } _card;
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { struct { void *__ptr_; } ; } m_callableWrapper; } _invalidationHandler;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithCard:(id)a0 invalidationHandler:(void *)a1;

@end
