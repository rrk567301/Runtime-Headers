@protocol ATXNotificationSettingsReaderProtocol;

@interface ATXModeMetricsLogUploader : NSObject {
    id<ATXNotificationSettingsReaderProtocol> _notificationSettingsReader;
}

- (void).cxx_destruct;
- (id)initWithNotificationSettingsReader:(id)a0;
- (void)uploadFocusLogsToCoreAnalyticsWithActivity:(id)a0 contactStore:(id)a1;
- (void)uploadNotificationLogsToCoreAnalyticsWithTask:(id)a0 contactStore:(id)a1;

@end
