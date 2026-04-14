@class NSView, AXVBorderedZoomWindow, SOGridView;

@interface SOGridWindowController : NSWindowController {
    unsigned long long _startingNumber;
    struct CGPath { } *_defaultCutoutPath;
    BOOL _gridActive;
}

@property NSView *backgroundView;
@property SOGridView *gridView;
@property SOGridView *prevGridView;
@property AXVBorderedZoomWindow *zoomWindow;
@property SOGridView *zoomGridView;
@property BOOL minimumSize;
@property (readonly) unsigned long long gridLevel;

- (void)dealloc;
- (void)_reset;
- (id)initWithScreen:(id)a0;
- (id)labeledElements;
- (void)showGridForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startingNumber:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_computeNextGridViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_synchronizeControllerState;
- (void)_orderFrontWindowsForGridView:(id)a0;
- (void)_animateInWindow;
- (BOOL)_containsGridNumber:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computeSquareFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_orderOutWindowsForGridView:(id)a0;
- (BOOL)_zoomActive;
- (BOOL)_needsZoomForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_showZoomWindowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_computeZoomFactorForDimension:(double)a0;
- (unsigned long long)minimumGridCellNumber;
- (unsigned long long)maximumGridCellNumber;
- (void)showGridWithStartingNumber:(unsigned long long)a0;
- (void)hideWindowContents;
- (void)drillAtNumber:(unsigned long long)a0;
- (BOOL)_containsNumber:(unsigned long long)a0;

@end
