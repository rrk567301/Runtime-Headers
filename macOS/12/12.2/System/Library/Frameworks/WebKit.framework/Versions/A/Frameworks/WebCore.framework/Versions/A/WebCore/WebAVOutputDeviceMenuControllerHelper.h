@interface WebAVOutputDeviceMenuControllerHelper : NSObject {
    struct WeakPtr<WebCore::AVOutputDeviceMenuControllerTargetPicker, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } m_callback;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithCallback:(void *)a0;
- (void)clearCallback;

@end
