@interface _WKSlowFrameHUDLayer : CALayer {
    struct WeakPtr<WebKit::RemoteLayerTreeDrawingAreaProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _drawingArea;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithDrawingArea:(void *)a0;

@end
