@interface WebResourceUsageOverlayLayer : CALayer {
    struct WeakPtr<WebCore::ResourceUsageOverlay, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_overlay;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithResourceUsageOverlay:(void *)a0;

@end
