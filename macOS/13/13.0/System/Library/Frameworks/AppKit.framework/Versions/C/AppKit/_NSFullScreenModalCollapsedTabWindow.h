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
- (BOOL)isAnimating;
- (void)reshapeContents;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (BOOL)hasTabBar;
- (void)takeTabBar:(id)a0;
- (void)forgetTabBar;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetTabFrame;
- (void)animateHideWithAdditionalMoveBlock:(id /* block */)a0;
- (void)_monitorModalPollDrags;
- (void)animateRevealWithAdditionalMoveBlock:(id /* block */)a0;
- (void)revealWithoutAnimating;
- (id)tabBarSnapshot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;

@end
