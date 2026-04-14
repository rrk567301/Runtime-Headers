@interface HomeKitDaemon.WidgetTimelineRefresherDataSource : NSObject <HMDWidgetTimelineRefresherDataSource>

- (id)init;
- (id)darwinNotificationProviderForTimelineRefresher:(id)a0;
- (id)logEventSubmitterForTimelineRefresher:(id)a0;
- (id)matterDeviceControllerForTimelineRefresher:(id)a0 withUUID:(id)a1;
- (id)notificationCenterForTimelineRefresher:(id)a0;
- (id)timerManagerForTimelineRefresher:(id)a0 options:(unsigned int)a1;
- (id)widgetConfigurationReaderForTimelineRefresher:(id)a0;
- (id)widgetTimelineControllerForTimelineRefresher:(id)a0;

@end
