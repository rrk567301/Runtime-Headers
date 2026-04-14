@class ATXNotificationSettingsReader;

@interface ATXNotificationSettingsLogger : NSObject {
    ATXNotificationSettingsReader *_reader;
}

- (id)init;
- (void).cxx_destruct;
- (void)_writeMetricsToTemporaryLocation:(id)a0;
- (id)initWithNotificationSettingsReader:(id)a0;
- (void)logNotificationSettingsMetrics;

@end
