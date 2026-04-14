@interface NSPopupMenuPresentationInstance : NSMenuPresentationInstance

- (void)dismissAnimated:(BOOL)a0;
- (id)initWithImpl:(id)a0;
- (void)startMonitoringEvents;
- (void)stopMonitoringEvents;
- (BOOL)_shouldCancelEventOnMouseDownDismissal;
- (void)dismiss;

@end
