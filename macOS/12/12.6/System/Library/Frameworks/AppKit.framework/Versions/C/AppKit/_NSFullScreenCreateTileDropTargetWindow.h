@class _NSFullScreenCreateTileDropTargetController;

@interface _NSFullScreenCreateTileDropTargetWindow : NSPanel {
    _NSFullScreenCreateTileDropTargetController *_controller;
    id /* block */ _additionalMoveBlock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dropRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collapsedRect;
    BOOL _revealed;
}

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (BOOL)isAnimating;
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
- (id)initWithController:(id)a0;
- (void)setDropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collapsedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isRevealed;
- (void)animateRevealWithAdditionalMoveBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)animateHideWithAdditionalMoveBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;

@end
