@class NSTrackingArea;

@interface AMPRolloverTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *rolloverTracker;
@property (nonatomic) long long currentRolloverRow;
@property (nonatomic) long long lockCount;

- (void)reloadData;
- (void)layout;
- (void)tile;
- (void)mouseExited:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)menuForEvent:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)menu;
- (void)mouseEntered:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })_adjustFrameSizeToFitSuperview:(struct CGSize { double x0; double x1; })a0;
- (void)mouseMoved:(id)a0;
- (long long)_startingDocRow;
- (void)scrollRowToTop:(long long)a0;
- (void)lockRolloverUpdates;
- (void)unlockRolloverUpdates;
- (void)updateRowRolloverForEvent:(id)a0;

@end
