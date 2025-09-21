@class NSView;
@protocol PXNSScrollViewDelegate, PXNSScrollViewControllerAccessibilityDelegate;

@interface PXNSScrollView : NSScrollView {
    struct CGPoint { double x; double y; } _newVisibleOrigin;
    struct CGSize { double width; double height; } _contentSizeForNewVisibleOrigin;
    char _layoutInProgress;
    char _didLayout;
}

@property (weak, nonatomic, setter=px_setDelegate:) id<PXNSScrollViewDelegate> px_delegate;
@property (readonly, nonatomic) NSView *contentRootView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (nonatomic) char respectsContentZOrder;
@property (nonatomic) char deferContentOffsetUpdates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deferredContentBounds;
@property (nonatomic) char layoutOnBoundsChanges;
@property (nonatomic) char isExposedToAccessibility;
@property (weak, nonatomic) id<PXNSScrollViewControllerAccessibilityDelegate> accessibilityDelegate;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)layout;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (void)setContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setScrollerInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (char)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)_scrollViewDidScroll;
- (char)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (void)scrollToEdge:(unsigned int)a0 animated:(char)a1;
- (void)_clearVisibleOriginRequirement;
- (void)_contentViewBoundsDidChange:(id)a0;
- (void)_layoutScrollView;
- (void)addContentSubview:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForEdge:(unsigned int)a0;
- (char)isContentSubview:(id)a0;

@end
