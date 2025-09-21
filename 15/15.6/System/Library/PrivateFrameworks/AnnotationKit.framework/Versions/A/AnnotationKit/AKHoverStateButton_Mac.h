@interface AKHoverStateButton_Mac : NSButton

@property (retain) id viewEventMonitor;
@property char eventsCurrentlyInside;

- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;

@end
