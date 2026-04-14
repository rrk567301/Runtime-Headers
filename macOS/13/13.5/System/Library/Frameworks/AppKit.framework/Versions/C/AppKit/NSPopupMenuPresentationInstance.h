@interface NSPopupMenuPresentationInstance : NSMenuPresentationInstance

- (void)dismiss;
- (BOOL)_shouldCancelEventOnMouseDownDismissal;
- (void)dismissAnimated:(BOOL)a0;
- (id)initWithImpl:(id)a0;
- (void)startMonitoringEvents;
- (void)stopMonitoringEvents;

@end
