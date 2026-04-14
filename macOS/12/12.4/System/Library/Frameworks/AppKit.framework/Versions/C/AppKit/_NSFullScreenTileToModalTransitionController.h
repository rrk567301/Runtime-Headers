@class _NSFullScreenSpace, NSWindow, _NSFullScreenTileToModalTransitionOverlayWindow;

@interface _NSFullScreenTileToModalTransitionController : _NSFullScreenTransitionController {
    NSWindow *_sourceWindow;
    _NSFullScreenSpace *_startingSpace;
    _NSFullScreenTileToModalTransitionOverlayWindow *_overlayWindow;
}

+ (id)transitionFromWindow:(id)a0;

- (void)dealloc;
- (void)start;
- (void)_transitionComplete;
- (void)_setupAndPresentOverlayWindow;
- (void)_moveWindowToFinalState;
- (void)_performAnimation;
- (id)startingSpace;
- (id)initFromWindow:(id)a0;
- (id)destinationSpace;

@end
