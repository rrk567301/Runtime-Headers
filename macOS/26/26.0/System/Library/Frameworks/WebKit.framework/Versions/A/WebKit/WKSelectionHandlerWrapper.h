@interface WKSelectionHandlerWrapper : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__ptr_; } m_callableWrapper; } _selectionHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSelectionHandler:(void *)a0;
- (void)executeSelectionHandler;

@end
