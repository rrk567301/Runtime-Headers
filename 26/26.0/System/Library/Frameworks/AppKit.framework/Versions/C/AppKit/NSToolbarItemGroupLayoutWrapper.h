@class NSToolbarItem, NSArray, NSString, NSPortalView, NSToolbarPlatterView, _NSToolbarItemBadgeView;

@interface NSToolbarItemGroupLayoutWrapper : NSView <NSToolbarGlassAwareItem> {
    NSToolbarItem *_item;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _maxSize;
    struct CGSize { double width; double height; } _minViewSize;
    struct CGSize { double width; double height; } _maxViewSize;
    BOOL _requiresLeadingPadding;
    BOOL _requiresTrailingPadding;
    BOOL _isFirstItemInGlassGroup;
    BOOL _isLastItemInGlassGroup;
    NSToolbarPlatterView *_associatedPlatter;
    NSPortalView *_portalView;
}

@property (readonly) NSToolbarItem *item;
@property BOOL requiresLeadingPadding;
@property BOOL requiresTrailingPadding;
@property (retain, nonatomic) _NSToolbarItemBadgeView *badgeView;
@property (readonly) BOOL isVisible;
@property (readonly) unsigned long long glassBehavior;
@property (readonly) BOOL isNavigational;
@property (readonly) NSArray *subitems;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } glassBackedViewRectInSelf;
@property (weak) NSToolbarPlatterView *associatedPlatter;
@property (getter=isFirstItemInGlassGroup) BOOL firstItemInGlassGroup;
@property (getter=isLastItemInGlassGroup) BOOL lastItemInGlassGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const struct __NSToolbarMetrics { struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; } x0; struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; } x1; } *)_metrics;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (id)initWithItem:(id)a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (void)insertBadgeView;
- (BOOL)isSpace;
- (void)invalidateSizes;
- (void)removeBadgeView;
- (void)_addPortalViewToPlatter;
- (struct CGSize { double x0; double x1; })_alignmentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureBadgeView;
- (void)_itemBadgeChanged;
- (double)_leadingLateralInsetIcon;
- (struct CGSize { double x0; double x1; })_maxViewSize;
- (struct CGSize { double x0; double x1; })_minViewSize;
- (id)_portalSourceView;
- (void)_removePortalViewFromPlatter;
- (BOOL)_shouldReserveSpaceForLabel;
- (void)_syncPortalFrame;
- (double)_trailingLateralInsetIcon;
- (void)_updateItemSizes;
- (void)_updateItemViewSizes;
- (void)_updateMeasuredSizes;
- (void)_updatePortalSourceView;
- (id)declaredLayoutConstraints;
- (unsigned long long)itemPosition;
- (long long)priorityIndex;

@end
