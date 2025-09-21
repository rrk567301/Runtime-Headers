@class NSBox, _NSFullScreenModalStackController, NSTimer, NSTabBar;

@interface _NSFullScreenModalCollapsedTabWindow : NSPanel {
    _NSFullScreenModalStackController *_stackController;
    id /* block */ _additionalMoveBlock;
    NSTabBar *_borrowedTabBar;
    NSBox *_tabCenteringBox;
    NSBox *_windowTopBorderBox;
    char _revealed;
    NSTimer *_beginModalPollTimer;
}

- (void)dealloc;
- (char)_allowsSnapping;
- (char)_canMiniaturize;
- (id)tabBarSnapshot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetTabFrame;
- (void)reshapeContents;
- (char)_allowsExteriorResizing;
- (char)_canBeSnappingTarget;
- (char)_ignoreForFullScreenTransition;
- (void)_monitorModalPollDrags;
- (void)_setWindowTag;
- (void)animateHideWithAdditionalMoveBlock:(id /* block */)a0;
- (void)animateRevealWithAdditionalMoveBlock:(id /* block */)a0;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (void)forgetTabBar;
- (char)hasTabBar;
- (id)initWithStackController:(id)a0;
- (char)isAnimating;
- (char)isMovable;
- (void)moveToSpace;
- (void)revealWithoutAnimating;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;
- (void)takeTabBar:(id)a0;

@end
