@interface AppKit.PlaceholderTrackingSessionDelegate : NSObject <NSMenuTrackingSessionDelegate>

- (id)init;
- (void)forwardEventToApp:(id)a0;
- (BOOL)trackingSessionCanForwardEvent:(id)a0 toCustomMenuItem:(id)a1;
- (void)trackingSessionDidEnd:(id)a0;
- (void)trackingSessionDidStart;
- (void)trackingSessionWillDismissAnimated;

@end
