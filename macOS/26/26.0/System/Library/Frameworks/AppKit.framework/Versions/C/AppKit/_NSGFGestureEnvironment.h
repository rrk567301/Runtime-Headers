@protocol GFGestureNodeCoordinator;

@interface _NSGFGestureEnvironment : _NSGestureEnvironmentBase {
    id<GFGestureNodeCoordinator> _nodeCoordinator;
}

- (id)init;
- (void)_cancelGestureRecognizers:(id)a0;
- (void).cxx_destruct;
- (void)_didAddActiveGestureRecognizer:(id)a0 withEvent:(id)a1;
- (void)_didRemoveActiveGestureRecognizer:(id)a0;
- (BOOL)_routeMouseEventToActiveGestureRecognizers:(id)a0;
- (void)_routeTouchEventToActiveGestureRecognizers:(id)a0;

@end
