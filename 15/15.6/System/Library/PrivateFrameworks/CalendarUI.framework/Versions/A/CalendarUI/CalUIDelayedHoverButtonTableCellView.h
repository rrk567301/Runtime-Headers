@class NSTrackingArea, CalUIDelayedHoverButton;

@interface CalUIDelayedHoverButtonTableCellView : NSTableCellView

@property (retain) CalUIDelayedHoverButton *button;
@property char cancelButtonTimer;
@property (retain) NSTrackingArea *trackingArea;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)addButton:(id)a0;
- (void)showButton;
- (char)buttonShouldAlwaysBeShown;
- (char)buttonStateIsLocked;
- (struct CGPoint { double x0; double x1; })currentMouseLocation;
- (void)hideButton;
- (void)hideTransientButton;
- (char)mouseInView;
- (void)showButtonAfterDelay;
- (void)showButtonIfMouseHasMovedSlowlyEnoughFromPreviousLocation:(id)a0;

@end
