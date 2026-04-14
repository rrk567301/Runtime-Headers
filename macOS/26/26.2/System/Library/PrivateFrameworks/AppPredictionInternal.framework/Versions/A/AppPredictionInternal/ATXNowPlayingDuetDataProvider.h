@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;

- (id)convertNowPlayingEventsToAppLaunchEvents:(id)a0;
- (id)playbackEventsAfterSecondsOfInactivity:(double)a0 betweenStartDate:(id)a1 endDate:(id)a2;

@end
