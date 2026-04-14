@class NSWindow, QLPreviewView;

@interface QLPreviewSwipeController : NSObject {
    QLPreviewView *_transitionPreviewView;
    NSWindow *_transitionWindow;
    id /* block */ _completionBlock;
    int _swipeStatus;
    BOOL _validateSwipe;
}

@property int status;
@property QLPreviewView *previewView;
@property (readonly) BOOL forwardSwipe;

- (void)dealloc;
- (void)abortSwipe;
- (void)swipeWithEvent:(id)a0 containingView:(id)a1 options:(int)a2 beginBlock:(id /* block */)a3 previewFrameBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;
- (void)_swipeEndedAndCompleted:(BOOL)a0;

@end
