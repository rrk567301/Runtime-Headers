@interface WKSelectionHandlerWrapper : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { struct { void *__ptr_; } ; } m_callableWrapper; } _selectionHandler;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSelectionHandler:(void *)a0;
- (void)executeSelectionHandler;

@end
