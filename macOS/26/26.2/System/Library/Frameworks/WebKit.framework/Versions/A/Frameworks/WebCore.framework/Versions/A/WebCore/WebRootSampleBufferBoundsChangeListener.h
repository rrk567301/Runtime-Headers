@class CALayer;

@interface WebRootSampleBufferBoundsChangeListener : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { struct { void *__ptr_; } ; } m_callableWrapper; } _callback;
    struct RetainPtr<CALayer> { CALayer *m_ptr; } _rootLayer;
}

- (void)invalidate;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCallback:(void *)a0;
- (void)dealloc;
- (void)begin:(id)a0;

@end
