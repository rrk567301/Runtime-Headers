@class NSHashTable, NSScrollPocket;

@interface WKFullScreenPlaceholderView : WebCoreFullScreenPlaceholderView <NSScrollViewSeparatorTrackingAdapter> {
    struct RetainPtr<NSScrollPocket> { NSScrollPocket *m_ptr; } _scrollPocket;
    struct RetainPtr<NSHashTable<NSView *>> { NSHashTable *m_ptr; } _scrollPocketContainers;
    struct RectEdges<float> { struct array<float, 4UL> { float __elems_[4]; } m_sides; } _obscuredContentInsets;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollViewFrame;
@property (readonly) BOOL hasScrolledContentsUnderTitlebar;
@property (readonly) double separatorOffset;
@property (readonly) BOOL relaxRegistrationRequirements;
@property (readonly) BOOL hasHeader;
@property long long titlebarBackgroundStyle;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)registerPocketContainer:(id)a0 onEdge:(long long)a1;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)unregisterPocketContainer:(id)a0 onEdge:(long long)a1;
- (void)_recomputeScrollPocketFrame;
- (BOOL)scrollViewDrawsMagicPocket;
- (void)setTopScrollPocket:(id)a0 obscuredContentInsets:(const void *)a1;

@end
