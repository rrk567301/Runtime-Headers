@class NSString;

@interface EKUIAlarmContainerView : NSView <NSAccessibilityContainsTransientUI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)accessibilityPerformShowAlternateUI;
- (char)accessibilityPerformShowDefaultUI;
- (char)isAccessibilityAlternateUIVisible;
- (id)_alarmButton;
- (void)sendTransientUIChangedNotification;

@end
