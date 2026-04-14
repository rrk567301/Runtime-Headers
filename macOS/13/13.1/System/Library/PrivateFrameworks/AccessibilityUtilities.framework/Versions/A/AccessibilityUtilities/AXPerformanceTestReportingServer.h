@interface AXPerformanceTestReportingServer : AXServer

+ (id)server;

- (id)_serviceName;
- (void)voiceOverTouchDidLaunch;
- (void)assistiveTouchDidLaunch;
- (void)voiceOverDidSpeak:(id)a0;

@end
