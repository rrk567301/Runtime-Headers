@class ATXNotificationSettingsReader;

@interface ATXNotificationSettingsLogger : NSObject {
    ATXNotificationSettingsReader *_reader;
}

- (void).cxx_destruct;
- (id)init;
- (void)_writeMetricsToTemporaryLocation:(id)a0;
- (id)initWithNotificationSettingsReader:(id)a0;
- (void)logNotificationSettingsMetrics;

@end
