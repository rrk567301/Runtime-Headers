@class NSString;

@interface NSTouchBarCustomizationPreviewSectionLayoutItemDescription : NSObject <_NSTouchBarItemLayoutWrapper>

@property struct CGSize { double width; double height; } minSize;
@property struct CGSize { double width; double height; } preferredSize;
@property struct CGSize { double width; double height; } maxSize;
@property struct CGSize { double width; double height; } contentClippingSize;
@property struct CGSize { double width; double height; } backupDragSize;
@property (getter=isStacked) char stacked;
@property (getter=isCentered) char centered;
@property char requiresTrueCenterLayout;
@property char isSpace;
@property long long priorityIndex;
@property unsigned long long itemPosition;
@property (getter=isEditable) char editable;
@property long long itemState;
@property char showsAppState;
@property struct CGPoint { double x; double y; } dragPosition;
@property struct CGPoint { double x; double y; } dragAnchorPoint;
@property (readonly, getter=isDragging) char dragging;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) char participatesInOverflow;
@property (readonly) char isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;

@end
