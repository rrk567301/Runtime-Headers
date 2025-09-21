@class NSString;

@interface SUOSUTelemetryStartPostLogoutEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property char nowIsLater;
@property char opportunistic;
@property char launchedDirectly;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)createReportableDictionary;
- (id)initWithNowIsLater:(char)a0 opportunistic:(char)a1 launchedDirectly:(char)a2;

@end
