@class NSTrackingArea;

@interface AMPRolloverTableView : NSTableView

@property (retain, nonatomic) NSTrackingArea *rolloverTracker;
@property (nonatomic) long long currentRolloverRow;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)tile;
- (void)viewDidMoveToSuperview;
- (void)updateRowRolloverForEvent:(id)a0;

@end
