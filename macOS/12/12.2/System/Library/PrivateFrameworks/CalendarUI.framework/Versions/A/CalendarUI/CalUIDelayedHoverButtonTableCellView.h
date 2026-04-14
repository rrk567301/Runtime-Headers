@class NSTrackingArea, CalUIDelayedHoverButton;

@interface CalUIDelayedHoverButtonTableCellView : NSTableCellView

@property (retain) CalUIDelayedHoverButton *button;
@property BOOL cancelButtonTimer;
@property (retain) NSTrackingArea *trackingArea;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)updateTrackingAreas;
- (void)addButton:(id)a0;
- (void)showButton;
- (void)hideTransientButton;
- (BOOL)buttonStateIsLocked;
- (void)showButtonAfterDelay;
- (BOOL)buttonShouldAlwaysBeShown;
- (void)hideButton;
- (struct CGPoint { double x0; double x1; })currentMouseLocation;
- (void)showButtonIfMouseHasMovedSlowlyEnoughFromPreviousLocation:(id)a0;
- (BOOL)mouseInView;

@end
