@class NSTrackingArea;

@interface AMPRolloverTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *rolloverTracker;
@property (nonatomic) long long currentRolloverRow;
@property (nonatomic) long long lockCount;

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)tile;
- (id)menuForEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)layout;
- (id)init;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)menu;
- (BOOL)respondsToSelector:(SEL)a0;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (void)mouseMoved:(id)a0;
- (void)scrollRowToTop:(long long)a0;
- (long long)_startingDocRow;
- (long long)_headerRowForRow:(long long)a0;
- (void)lockRolloverUpdates;
- (void)scrollRowToTop:(long long)a0 animated:(BOOL)a1;
- (void)unlockRolloverUpdates;
- (void)updateRowRolloverForEvent:(id)a0;

@end
