@protocol ZMFZScreenTransitionStateMachineDelegate;

@interface ZMFZScreenTransitionStateMachine : NSObject {
    double _zoomFactorToRestore;
    struct CGPoint { double x; double y; } _zoomOriginToRestore;
    BOOL _isObservingScreenScreenNotifications;
}

@property (weak, nonatomic) id<ZMFZScreenTransitionStateMachineDelegate> delegate;
@property (readonly, nonatomic) long long currentState;

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (void)_transitionToState:(long long)a0;
- (void)_setCurrentState:(long long)a0;
- (BOOL)_handleScreenSaverStarted;
- (BOOL)_handleScreenSaverEnded;
- (BOOL)_handleLockScreenLoginWindowStarted;
- (BOOL)_handleLockScreenLoginWindowEnded;
- (void)_handleApplicationDeactivated:(id)a0;
- (void)startObservingScreenNotifications;
- (void)stopObservingScreenNotifications;
- (BOOL)_handleScreenSaverBroughtToFront;
- (BOOL)_handleLockScreenLoginWindowBroughtToFront;
- (void)_saveForRestorationZoomFactor:(BOOL)a0 zoomOrigin:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_currentMousePosition;
- (void)_signalZoomOutAllTheWay;
- (void)_signalRestoreZoomFactor:(BOOL)a0 restoreZoomOrigin:(BOOL)a1 suppressAnimation:(BOOL)a2;
- (void)_signalCenterZoomViewOverLoginWindowPasswordFieldRestoringZoomFactor:(BOOL)a0;
- (void)_zoomOutAndResetStateAndLogError:(id)a0;
- (void)_setZoomFactorToRestore:(double)a0;
- (void)_setZoomOriginToRestore:(struct CGPoint { double x0; double x1; })a0;

@end
