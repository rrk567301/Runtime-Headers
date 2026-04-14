@interface WebResourceUsageOverlayLayer : CALayer {
    struct WeakPtr<WebCore::ResourceUsageOverlay, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_overlay;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithResourceUsageOverlay:(void *)a0;

@end
