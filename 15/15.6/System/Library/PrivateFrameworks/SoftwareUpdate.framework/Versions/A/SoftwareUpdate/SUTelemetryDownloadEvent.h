@class SUProduct, NSError, NSString;

@interface SUTelemetryDownloadEvent : SUTelemetryEvent <SUTelemetryReportable>

@property (retain) SUProduct *downloadProduct;
@property (retain) NSError *downloadError;
@property double downloadTimeElapsed;
@property char initiatedInForeground;
@property char wasCancelled;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (void)dealloc;
- (void)addTelemetryForDownloadFailureWithProduct:(id)a0 downloadError:(id)a1 timeElapsed:(double)a2 initiatedInForeground:(char)a3 wasCancelled:(char)a4;
- (void)addTelemetryForDownloadSuccessWithProduct:(id)a0 timeElapsed:(double)a1 initiatedInForeground:(char)a2;
- (id)createReportableDictionary;

@end
