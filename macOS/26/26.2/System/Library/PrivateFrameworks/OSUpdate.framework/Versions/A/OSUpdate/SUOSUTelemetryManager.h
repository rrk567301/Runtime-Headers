@class SUTelemetryManager;

@interface SUOSUTelemetryManager : NSObject

@property (retain) SUTelemetryManager *manager;

+ (id)sharedManager;

- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (id)init;
- (id)installEvent;
- (id)bootstrapTokenErrorEvent;
- (id)doItLaterEvent;
- (id)installRestartEvent;
- (void)reportEventFromDaemon:(id)a0;
- (id)splatRevokedEvent;

@end
