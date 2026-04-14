@interface WKContentView : NSView {
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { struct WebPageProxy *m_ptr; } _page;
}

@property (nonatomic) BOOL sizeChangedSinceLastVisibleContentRectUpdate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 page:(void *)a1;
- (void)_setAcceleratedCompositingRootLayer:(id)a0;

@end
