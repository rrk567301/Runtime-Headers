@class NSString, NSView, NSTouchBarItem, NSObject, NSGroupTouchBarItem;
@protocol NSTouchBarItemLayoutDelegate;

@interface NSTouchBarItemContainerView : NSView <_NSTouchBarItemLayoutWrapper> {
    NSView *_itemView;
    struct CGSize { double width; double height; } _preferredSize;
    struct CGSize { double width; double height; } _reducedMetricsThreshold;
    char _isEncapsulatingLayoutEngine;
    char _isMeasuringView;
    NSObject<NSTouchBarItemLayoutDelegate> *_layoutDelegate;
}

@property (retain) NSTouchBarItem *touchBarItem;
@property char isInCustomizationPalette;
@property long long priorityIndex;
@property (retain) NSGroupTouchBarItem *compressionItemContainingItem;
@property (retain) NSObject<NSTouchBarItemLayoutDelegate> *layoutDelegate;
@property char forcesReducedMetricsCompression;
@property (readonly) struct CGSize { double width; double height; } minSize;
@property (readonly) struct CGSize { double width; double height; } maxSize;
@property (readonly) char isSpace;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) char participatesInOverflow;
@property (readonly) char isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)clipsToBounds;

- (void)dealloc;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)_deferringLayoutNotifications:(id /* block */)a0;
- (void)_noteTouchBarItemViewChanged;
- (void)_showFrameIsCentered:(char)a0;
- (void)_updateMeasuredSizes;
- (id)_viewForItem;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)constraintsDidChangeInEngine:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
