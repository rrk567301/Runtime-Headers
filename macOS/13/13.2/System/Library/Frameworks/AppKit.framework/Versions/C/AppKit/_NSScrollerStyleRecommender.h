@class NSTimer;

@interface _NSScrollerStyleRecommender : NSObject {
    long long lastRecommendedScrollerStyle;
    NSTimer *scrollerStyleRecommendationUpdateTimer;
    BOOL isListeningForDevicesChangedNotification;
}

@property (readonly) long long recommendedScrollerStyle;

+ (id)sharedScrollerStyleRecommender;

- (void)dealloc;
- (id)init;
- (void)_cleanup;
- (void)showScrollBarsSettingChanged:(id)a0;
- (void)pointingDeviceGestureScrollSettingChanged:(id)a0;
- (void)scrollerStyleRecommendationUpdateTimerFired:(id)a0;
- (BOOL)startListeningForPointingDeviceConnectAndDisconnect;
- (void)stopListeningForPointingDeviceConnectAndDisconnect;
- (void)startListeningForUserPreferenceNotifications;
- (void)stopListeningForUserPreferenceNotifications;
- (void)setRecommendedScrollerStyleAndNotify:(long long)a0;
- (void)cancelScrollerStyleRecommendationUpdate;
- (void)scheduleScrollerStyleRecommendationUpdate:(double)a0;
- (void)noteSessionDevicesChanged;

@end
