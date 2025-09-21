@class NSView, NSString;
@protocol PXNSScrollViewDelegate, PXNSScrollViewControllerAccessibilityDelegate;

@interface PXNSScrollView : NSScrollView <NSAccessibilityGroup> {
    struct CGPoint { double x; double y; } _newVisibleOrigin;
    struct CGSize { double width; double height; } _contentSizeForNewVisibleOrigin;
    BOOL _layoutInProgress;
    BOOL _didLayout;
}

@property (weak, nonatomic, setter=px_setDelegate:) id<PXNSScrollViewDelegate> px_delegate;
@property (readonly, nonatomic) NSView *contentRootView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentVisibleRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (nonatomic) BOOL respectsContentZOrder;
@property (nonatomic) BOOL deferContentOffsetUpdates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deferredContentBounds;
@property (nonatomic) BOOL layoutOnBoundsChanges;
@property (nonatomic) BOOL isExposedToAccessibility;
@property (weak, nonatomic) id<PXNSScrollViewControllerAccessibilityDelegate> accessibilityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)setContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setScrollerInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)_scrollViewDidScroll;
- (BOOL)isScrolledAtEdge:(unsigned int)a0 tolerance:(double)a1;
- (void)scrollToEdge:(unsigned int)a0 animated:(BOOL)a1;
- (void)_clearVisibleOriginRequirement;
- (void)_contentViewBoundsDidChange:(id)a0;
- (void)_layoutScrollView;
- (void)addContentSubview:(id)a0;
- (struct CGPoint { double x0; double x1; })contentOffsetForEdge:(unsigned int)a0;
- (BOOL)isContentSubview:(id)a0;

@end
