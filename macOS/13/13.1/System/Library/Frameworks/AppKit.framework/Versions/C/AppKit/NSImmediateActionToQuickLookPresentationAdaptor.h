@class NSView, NSForceClickMonitor, NSEvent;
@protocol NSImmediateActionGestureRecognizerDelegate, NSImmediateActionAnimationController;

@interface NSImmediateActionToQuickLookPresentationAdaptor : NSObject {
    NSForceClickMonitor *_forceClickMonitor;
    id<NSImmediateActionAnimationController> _animationController;
    NSEvent *_startEvent;
    long long _flags;
}

@property long long presentationState;
@property (weak) id<NSImmediateActionGestureRecognizerDelegate> delegate;
@property (retain) id<NSImmediateActionAnimationController> animationController;
@property (weak) NSView *view;
@property (readonly) double animationProgress;
@property (readonly) unsigned long long modifierFlags;

+ (BOOL)isForceClickPossibleFromEvent:(id)a0;

- (void)dealloc;
- (id)_delegate;
- (void).cxx_destruct;
- (long long)state;
- (void)cancel;
- (void)_reset;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)_forceClickMonitor;
- (id)_startEvent;
- (void)_forceClickMonitorDidChange:(id)a0;
- (void)_halfReset;
- (void)presentQuickLookInView:(id)a0;
- (void)_presentWithQuickLookEvent:(id)a0;

@end
