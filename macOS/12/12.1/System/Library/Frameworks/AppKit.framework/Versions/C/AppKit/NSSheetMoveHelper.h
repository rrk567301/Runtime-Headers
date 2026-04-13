@class NSArray, NSWindow, NSPointerArray;

@interface NSSheetMoveHelper : NSMoveHelper {
    NSWindow *_sheet;
    NSWindow *_sheetParent;
    NSWindow *_ultimateParent;
    NSWindow *_effectiveParent;
    BOOL _isHidden;
    BOOL _detached;
    BOOL _waitingToAttach;
    long long _flavor;
    long long _animationStyle;
    NSArray *_cgsWindows;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetStartFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sheetDelta;
    BOOL _windowHadKeyAppearance;
    double _totalTime;
    double _currentProgress;
    NSPointerArray *_dimmedWindows;
}

@property (readonly, weak) NSWindow *sheetWindow;
@property (readonly, weak) NSWindow *sheetParent;
@property (readonly, weak) NSWindow *sheetParentForOrdering;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, getter=isWaitingToAttach) BOOL waitingToAttach;
@property (readonly, getter=isClosing) BOOL closing;

+ (id)moveHelperWithSheet:(id)a0;
+ (id)moveHelpersDimmingWindow:(id)a0;
+ (id)_dimmingViewForWindow:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)screen;
- (double)animationDuration;
- (void)cleanUpAnimation;
- (void)animateStep:(double)a0;
- (BOOL)shouldSkipAnimation;
- (void)setUpAnimation;
- (void)_configureFinalState;
- (void)animateResizeToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareSheetParent:(id)a0;
- (struct CGSize { double x0; double x1; })sheetSizeToFitScreenFromSize:(struct CGSize { double x0; double x1; })a0 inPositioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parent:(id)a2;
- (void)openSheet;
- (void)closeSheet;
- (void)hideSheet:(BOOL)a0;
- (void)unhideSheet;
- (void)updateDimmingMaterial;
- (void)clearDimmingMaterial;
- (id)initWithSheet:(id)a0;
- (void)_positionWindow;
- (void)_animateSheet;
- (void)_animatePanel;
- (void)_closeSheetLogicallyDetachSheet;
- (BOOL)_updateDimmingEffect:(double)a0 forWindow:(id)a1;
- (void)_updateDimmingEffect:(double)a0 forWindowAndDescendants:(id)a1 stoppingAt:(id)a2 unvisitedChildren:(id)a3;
- (id)_topmostSheetFromWindow:(id)a0;
- (struct CGSize { double x0; double x1; })_parentFrameDeltaForCurrentProgress;
- (void)_gatherMovementChildren;
- (void)_openSheetLogicallyAttachSheet;
- (id)_findSheetParent;

@end
