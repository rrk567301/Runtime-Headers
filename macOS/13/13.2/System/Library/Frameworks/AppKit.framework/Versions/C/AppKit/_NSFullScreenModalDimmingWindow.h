@class CALayer, _NSFullScreenModalStackController;
@protocol _NSFullScreenModalDimmingWindowDelegate;

@interface _NSFullScreenModalDimmingWindow : NSPanel {
    _NSFullScreenModalStackController *_stackController;
    CALayer *_rootLayer;
    CALayer *_dimLayer;
    CALayer *_windowSnapshotLayer;
    BOOL _isShowingDimmingLayer;
}

@property id<_NSFullScreenModalDimmingWindowDelegate> delegate;

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
- (void)_createDimLayerIfNeeded;
- (void)beginPresentationWithIncomingWindowSnapshot:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)endPresentationWithIncomingWindowSnapshot:(id)a0 startingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forSendDocument:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)moveToSpace;

@end
