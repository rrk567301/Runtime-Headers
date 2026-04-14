@class NSToolbarClippedItemsIndicator, NSString, NSToolbarView;

@interface NSToolbarClippedItemsIndicatorViewer : NSView <_NSTouchBarItemLayoutWrapper> {
    BOOL _needsModeConfiguration;
    NSToolbarClippedItemsIndicator *_clippedItemsIndicator;
    struct CGSize { double width; double height; } _minSize;
    unsigned long long _displayMode;
    NSToolbarView *_toolbarView;
}

@property (readonly) NSToolbarClippedItemsIndicator *clippedItemsIndicator;
@property (setter=_setNeedsModeConfiguration:) BOOL _needsModeConfiguration;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) unsigned long long itemPosition;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) long long priorityIndex;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)animateIntoView;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)animateOutOfView;
- (void)configureForLayoutInDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1 inToolbarView:(id)a2;
- (id)declaredLayoutConstraints;

@end
