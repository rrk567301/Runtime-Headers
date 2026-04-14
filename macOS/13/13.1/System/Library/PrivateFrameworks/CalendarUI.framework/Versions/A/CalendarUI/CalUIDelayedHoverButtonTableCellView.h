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
- (void)showButtonIfMouseHasMovedSlowlyEnoughFromPreviousLocation:(id)a0;
- (BOOL)buttonStateIsLocked;
- (BOOL)buttonShouldAlwaysBeShown;
- (void)hideTransientButton;
- (void)hideButton;
- (void)showButtonAfterDelay;
- (BOOL)mouseInView;
- (struct CGPoint { double x0; double x1; })currentMouseLocation;

@end
