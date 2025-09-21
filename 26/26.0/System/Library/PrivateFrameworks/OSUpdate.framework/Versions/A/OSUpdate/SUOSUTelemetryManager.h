@class SUTelemetryManager;

@interface SUOSUTelemetryManager : NSObject

@property (retain) SUTelemetryManager *manager;

+ (id)sharedManager;

- (id)initWithManager:(id)a0;
- (id)init;
- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)installEvent;
- (id)doItLaterEvent;
- (id)installRestartEvent;
- (void)reportEventFromDaemon:(id)a0;
- (id)splatRevokedEvent;

@end
