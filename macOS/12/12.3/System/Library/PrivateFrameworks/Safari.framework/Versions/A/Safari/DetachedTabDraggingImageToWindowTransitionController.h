@class NSScreen, NSWindow;
@protocol DetachedTabDraggingImageToWindowTransitionControllerDelegate;

@interface DetachedTabDraggingImageToWindowTransitionController : NSObject {
    id<DetachedTabDraggingImageToWindowTransitionControllerDelegate> _delegate;
    NSWindow *_sourceMiniWindow;
    NSWindow *_destinationWindow;
    struct CGPoint { double x; double y; } _dropLocation;
    NSScreen *_destinationScreen;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowAnimationStartFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowAnimationEndFrame;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _windowAnimationEndTransform;
    BOOL _destinationWindowWillMoveToFullScreen;
}

+ (void)detachTabAtPointOnScreen:(struct CGPoint { double x0; double x1; })a0 withDraggedMiniWindow:(id)a1 ofWidth:(double)a2 withDelegate:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)_startAnimation;
- (id)_initWithMiniWindow:(id)a0 ofWidth:(double)a1 dropLocation:(struct CGPoint { double x0; double x1; })a2 delegate:(id)a3;
- (BOOL)_willDestinationWindowMoveToFullScreen;
- (void)_setUpWindowAnimationStartFrameWithMiniWindowWidth:(double)a0;
- (void)_setUpWindowAnimationEndFrame;
- (void)_setUpWindow;
- (void)_updateAnimationWithProgress:(float)a0;

@end
