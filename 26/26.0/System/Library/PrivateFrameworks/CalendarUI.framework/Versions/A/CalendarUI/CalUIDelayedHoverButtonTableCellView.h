@class NSTrackingArea, CalUIDelayedHoverButton;

@interface CalUIDelayedHoverButtonTableCellView : NSTableCellView

@property (retain) CalUIDelayedHoverButton *button;
@property BOOL cancelButtonTimer;
@property (retain) NSTrackingArea *trackingArea;

- (void)dealloc;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)addButton:(id)a0;
- (void)showButton;
- (BOOL)buttonShouldAlwaysBeShown;
- (BOOL)buttonStateIsLocked;
- (struct CGPoint { double x0; double x1; })currentMouseLocation;
- (void)hideButton;
- (void)hideTransientButton;
- (BOOL)mouseInView;
- (void)showButtonAfterDelay;
- (void)showButtonIfMouseHasMovedSlowlyEnoughFromPreviousLocation:(id)a0;

@end
