@class NSView, NSTextInsertionIndicator, NSViewWindowBackingStoreBuffer;

@interface NSTextDragInfo : NSObject

@property (retain, nonatomic) NSTextInsertionIndicator *dragIndicator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } indicatorViewRect;
@property (nonatomic, getter=isSavedImageValid) char savedImageValid;
@property (retain, nonatomic) NSViewWindowBackingStoreBuffer *cacheFromUnderIndicator;
@property (nonatomic, getter=isDraggingLinkedFile) char draggingLinkedFile;
@property (nonatomic) NSView *dragAnimationOverlay;

- (void)dealloc;

@end
