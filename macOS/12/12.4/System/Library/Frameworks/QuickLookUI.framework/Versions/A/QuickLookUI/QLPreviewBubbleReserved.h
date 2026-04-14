@class NSArray, NSURL, NSObject, NSWindow;
@protocol QLPreviewBubbleDelegate, OS_dispatch_queue, QLPreviewItem;

@interface QLPreviewBubbleReserved : NSObject {
    id<QLPreviewItem> previewItem;
    NSURL *representedURL;
    NSArray *preloadedItems;
    NSWindow *parentWindow;
    struct __QLPreviewBubble { } *bubbleRef;
    int animationType;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationSourceFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationContentFrame;
    unsigned long long preferredEdge;
    BOOL needsToSendPreviewItem;
    long long windowLevel;
    struct CGPoint { double x; double y; } aimPoint;
    struct CGSize { double width; double height; } maximumSize;
    double maxArea;
    NSArray *controls;
    id<QLPreviewBubbleDelegate> delegate;
    NSObject<OS_dispatch_queue> *queue;
    NSArray *modes;
    BOOL modesAreCustom;
    BOOL autoplays;
    BOOL forcePreferredEdge;
    id /* block */ activateMonitorBlock;
    id eventMonitor;
    BOOL seamlesslyOpening;
    BOOL seamlesslyVisible;
    BOOL seamlesslyClosed;
    BOOL disableAnimation;
    BOOL skipAnimationInvoke;
    BOOL skipAlphaDuringOpenAnimation;
    id /* block */ bubbleDidCloseCompletionBlock;
}

- (void)finalize;
- (void)dealloc;

@end
