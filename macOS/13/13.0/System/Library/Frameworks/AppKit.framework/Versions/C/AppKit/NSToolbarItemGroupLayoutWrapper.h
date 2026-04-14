@class NSString, NSToolbarItem;

@interface NSToolbarItemGroupLayoutWrapper : NSView <_NSTouchBarItemLayoutWrapper> {
    NSToolbarItem *_item;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _maxSize;
    struct CGSize { double width; double height; } _minViewSize;
    struct CGSize { double width; double height; } _maxViewSize;
    BOOL _requiresLeadingPadding;
    BOOL _requiresTrailingPadding;
    long long _tooltipTag;
}

@property (readonly) NSToolbarItem *item;
@property BOOL requiresLeadingPadding;
@property BOOL requiresTrailingPadding;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) long long priorityIndex;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithItem:(id)a0;
- (const struct __NSToolbarMetrics { struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; } x0; struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } x1; } *)_metrics;
- (id)declaredLayoutConstraints;
- (void)_updateMeasuredSizes;
- (struct CGSize { double x0; double x1; })_minViewSize;
- (struct CGSize { double x0; double x1; })_maxViewSize;
- (void)invalidateSizes;
- (struct CGSize { double x0; double x1; })_alignmentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_shouldReserveSpaceForLabel;
- (void)_updateItemSizes;
- (void)_updateItemViewSizes;
- (void)_updateToolTipWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
