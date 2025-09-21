@class NSString, NSEvent, NSView, NSMutableArray, NSWindow;

@interface _NSGestureEnvironmentBase : NSObject <_NSGestureEnvironment> {
    NSMutableArray *_activeGestureRecognizers;
    unsigned long long _activeGestureRecognizerEvents;
    unsigned long long _previousGestureEventMaskBeforeRecognizers;
    struct __flags { unsigned char gatheringActiveGestureRecognizers : 1; } _flags;
}

@property (weak) NSWindow *window;
@property (readonly) BOOL hasActiveGestureRecognizers;
@property (readonly) BOOL hasDelayedEvents;
@property (readonly) BOOL isGatheringActiveGestureRecognizers;
@property (readonly) NSEvent *latchingEvent;
@property (readonly) NSView *latchedView;
@property long long lastPressureMTID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancelGestureRecognizers:(id)a0;
- (void).cxx_destruct;
- (id)_activeGestureRecognizers;
- (void)_clearGestureRecognizerState;
- (void)_didAddActiveGestureRecognizer:(id)a0 withEvent:(id)a1;
- (void)_didRemoveActiveGestureRecognizer:(id)a0;
- (void)_gatherActiveGestureRecognizersForMouseEvent:(id)a0 requireAcceptsFirstMouse:(BOOL)a1;
- (void)_gatherActiveGestureRecognizersForTouchEvent:(id)a0 contextId:(long long)a1 touchDevice:(id)a2;
- (BOOL)_routeMouseEventToActiveGestureRecognizers:(id)a0;
- (void)_routeTouchEventToActiveGestureRecognizers:(id)a0;
- (id)_sendMouseEventToGestureRecognizers:(id)a0 requireAcceptsFirstMouse:(BOOL)a1;
- (void)cancelActiveGestureRecognizers;
- (void)enumerateActiveGestureRecognizers:(id /* block */)a0;
- (id)mostCompatibleActiveRecognizer;
- (void)registerCommandeeredTouchGestureRecognizers:(id)a0 withEvent:(id)a1;
- (void)removeActiveGestureRecognizer:(id)a0;
- (void)sendCommandeeredTouchesEventToGestureRecognizers:(id)a0;
- (id)sendEventToGestureRecognizers:(id)a0 requireAcceptsFirstMouse:(BOOL)a1;
- (id)sendTouchesEventToGestureRecognizers:(id)a0 suppressDirectTouches:(BOOL)a1;

@end
