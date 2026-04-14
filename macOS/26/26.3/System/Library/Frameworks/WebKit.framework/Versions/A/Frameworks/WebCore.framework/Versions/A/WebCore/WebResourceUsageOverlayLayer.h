@interface WebResourceUsageOverlayLayer : CALayer {
    struct WeakPtr<WebCore::ResourceUsageOverlay, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_overlay;
}

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithResourceUsageOverlay:(void *)a0;

@end
