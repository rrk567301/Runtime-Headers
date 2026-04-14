@interface WKSelectionHandlerWrapper : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__ptr_; } m_callableWrapper; } _selectionHandler;
}

- (id).cxx_construct;
- (id)initWithSelectionHandler:(void *)a0;
- (void).cxx_destruct;
- (void)executeSelectionHandler;

@end
