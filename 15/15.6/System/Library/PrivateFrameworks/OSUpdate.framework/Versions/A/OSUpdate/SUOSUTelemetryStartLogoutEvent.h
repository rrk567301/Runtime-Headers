@class NSString;

@interface SUOSUTelemetryStartLogoutEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property char result;
@property char forceRestart;
@property char nowIsLater;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)createReportableDictionary;
- (id)initWithResult:(char)a0 forceRestart:(char)a1 nowIsLater:(char)a2;

@end
