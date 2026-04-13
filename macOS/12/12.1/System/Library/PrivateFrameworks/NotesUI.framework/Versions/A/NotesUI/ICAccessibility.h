@interface ICAccessibility : NSObject <ICAccessibilityExtras>

+ (id)sharedInstance;
+ (id)synthesizeAccessibilityRightClickEventAtCenterOfView:(id)a0;

- (void)postAnnouncement:(id)a0 withSender:(id)a1 priority:(long long)a2;
- (BOOL)needsAccessibilityElements;
- (BOOL)shouldPerformLoggingForVoiceOver;
- (BOOL)shouldPerformLoggingForSwitchControl;

@end
