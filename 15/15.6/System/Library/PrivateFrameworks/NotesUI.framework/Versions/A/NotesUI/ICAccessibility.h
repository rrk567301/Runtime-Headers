@interface ICAccessibility : NSObject <ICAccessibilityExtras>

+ (id)sharedInstance;
+ (id)synthesizeAccessibilityRightClickEventAtCenterOfView:(id)a0;

- (char)needsAccessibilityElements;
- (void)postAnnouncement:(id)a0 withSender:(id)a1 priority:(long long)a2;
- (char)shouldPerformLoggingForSwitchControl;
- (char)shouldPerformLoggingForVoiceOver;

@end
