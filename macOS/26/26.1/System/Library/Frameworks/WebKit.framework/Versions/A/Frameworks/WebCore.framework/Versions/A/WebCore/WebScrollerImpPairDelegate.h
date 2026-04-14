@class NSString;

@interface WebScrollerImpPairDelegate : NSObject <NSScrollerImpPairDelegate> {
    struct WeakPtr<WebCore::ScrollableArea, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _scrollableArea;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)inLiveResizeForScrollerImpPair:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentAreaRectForScrollerImpPair:(id)a0;
- (struct CGPoint { double x0; double x1; })mouseLocationInContentAreaForScrollerImpPair:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollerImpPair:(id)a0 convertContentPoint:(struct CGPoint { double x0; double x1; })a1 toScrollerImp:(id)a2;
- (void)scrollerImpPair:(id)a0 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)a1;
- (id)initWithScrollableArea:(void *)a0;
- (void)scrollerImpPair:(id)a0 setContentAreaNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
