@class _PASSQLTelemetryContext;

@interface _PASSQLTelemetryApi : NSObject {
    _PASSQLTelemetryContext *_telemetryContext;
}

- (void).cxx_destruct;
- (void)sendTelemetry;
- (void)applyCallbackWithCompletion:(id /* block */)a0;
- (id)initWithTelemetryContext:(id)a0;
- (void)removeCallback;
- (id)sqlEventLogForTelemetry;
- (id)sqlTelemetryContext;

@end
