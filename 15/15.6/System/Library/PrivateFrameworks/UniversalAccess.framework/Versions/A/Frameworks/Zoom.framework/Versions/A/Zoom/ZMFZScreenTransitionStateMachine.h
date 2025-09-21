@protocol ZMFZScreenTransitionStateMachineDelegate;

@interface ZMFZScreenTransitionStateMachine : NSObject {
    double _zoomFactorToRestore;
    struct CGPoint { double x; double y; } _zoomOriginToRestore;
    char _isObservingScreenScreenNotifications;
}

@property (weak, nonatomic) id<ZMFZScreenTransitionStateMachineDelegate> delegate;
@property (readonly, nonatomic) long long currentState;

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (void)_transitionToState:(long long)a0;
- (void)_setCurrentState:(long long)a0;
- (struct CGPoint { double x0; double x1; })_currentMousePosition;
- (void)_handleApplicationDeactivated:(id)a0;
- (char)_handleLockScreenLoginWindowBroughtToFront;
- (char)_handleLockScreenLoginWindowEnded;
- (char)_handleLockScreenLoginWindowStarted;
- (char)_handleScreenSaverBroughtToFront;
- (char)_handleScreenSaverEnded;
- (char)_handleScreenSaverStarted;
- (void)_saveForRestorationZoomFactor:(char)a0 zoomOrigin:(char)a1;
- (void)_setZoomFactorToRestore:(double)a0;
- (void)_setZoomOriginToRestore:(struct CGPoint { double x0; double x1; })a0;
- (void)_signalCenterZoomViewOverLoginWindowPasswordFieldRestoringZoomFactor:(char)a0;
- (void)_signalRestoreZoomFactor:(char)a0 restoreZoomOrigin:(char)a1 suppressAnimation:(char)a2;
- (void)_signalZoomOutAllTheWay;
- (void)_zoomOutAndResetStateAndLogError:(id)a0;
- (void)startObservingScreenNotifications;
- (void)stopObservingScreenNotifications;

@end
