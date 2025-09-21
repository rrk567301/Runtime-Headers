@class NSMenu;

@interface AppKit.PlaceholderTrackingSessionDelegate : NSObject <NSMenuTrackingSessionDelegate>

@property (nonatomic, readonly) NSMenu *mainMenu;

- (id)init;
- (void)forwardEventToApp:(id)a0;
- (char)trackingSessionCanForwardEvent:(id)a0 toCustomMenuItem:(id)a1;
- (void)trackingSessionDidEnd:(id)a0;
- (char)trackingSessionDidLoseFocus;
- (void)trackingSessionDidStart;
- (void)trackingSessionWillDismissAnimated;

@end
