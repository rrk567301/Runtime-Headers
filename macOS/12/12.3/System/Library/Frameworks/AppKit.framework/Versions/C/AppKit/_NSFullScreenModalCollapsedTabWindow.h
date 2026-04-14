@class NSBox, _NSFullScreenModalStackController, NSTimer, NSTabBar;

@interface _NSFullScreenModalCollapsedTabWindow : NSPanel {
    _NSFullScreenModalStackController *_stackController;
    id /* block */ _additionalMoveBlock;
    NSTabBar *_borrowedTabBar;
    NSBox *_tabCenteringBox;
    NSBox *_windowTopBorderBox;
    BOOL _revealed;
    NSTimer *_beginModalPollTimer;
}

- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (BOOL)isAnimating;
- (id)initWithStackController:(id)a0;
- (BOOL)_shouldSnapWindowsClientSide;
- (BOOL)_allowsSnapping;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_allowsExteriorResizing;
- (BOOL)isMovable;
- (BOOL)_canMiniaturize;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (void)moveToSpace;
- (void)reshapeContents;
- (void)forgetTabBar;
- (void)animateHideWithAdditionalMoveBlock:(id /* block */)a0;
- (BOOL)hasTabBar;
- (void)takeTabBar:(id)a0;
- (void)animateRevealWithAdditionalMoveBlock:(id /* block */)a0;
- (void)revealWithoutAnimating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetTabFrame;
- (void)_monitorModalPollDrags;
- (id)tabBarSnapshot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;

@end
