@class QLPreviewPanelController;

@interface QLPanelPreviewView : QLPreviewView

@property (weak) QLPreviewPanelController *previewPanelController;

+ (Class)_dragGestureRecognizerClass;

- (void).cxx_destruct;
- (char)mouseDownCanMoveWindow;
- (char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (char)_shouldAdaptSizeToScreen;
- (void)startDragFromGesture:(id)a0 beganOrFailedHandler:(id /* block */)a1;

@end
