@class NSTrackingArea, NSColor;

@interface AMPRolloverTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *rolloverTracker;
@property (nonatomic) long long currentRolloverRow;
@property (nonatomic) long long lockCount;
@property (copy, nonatomic) NSColor *actualCustomSelectionColor;
@property (copy, nonatomic) NSColor *customSelectionColor;
@property (copy, nonatomic) NSColor *customDropHighlightColor;

- (void)reloadData;
- (id)menu;
- (id)menuForEvent:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)layout;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)tile;
- (id)init;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (id)_dropHighlightColor;
- (id)makeRowViewForRow:(long long)a0;
- (void)mouseMoved:(id)a0;
- (long long)_startingDocRow;
- (void)scrollRowToTop:(long long)a0;
- (long long)_headerRowForRow:(long long)a0;
- (void)lockRolloverUpdates;
- (id)propertyKeysForViewSpy;
- (void)scrollRowToTop:(long long)a0 animated:(BOOL)a1;
- (void)unlockRolloverUpdates;
- (void)updateRowRolloverForEvent:(id)a0;

@end
