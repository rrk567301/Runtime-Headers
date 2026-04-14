@class SUTelemetryManager;

@interface SUOSUTelemetryManager : NSObject

@property (retain) SUTelemetryManager *manager;

+ (id)sharedManager;

- (id)initWithManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reportEvent:(id)a0;
- (id)installEvent;
- (id)bootstrapTokenErrorEvent;
- (id)doItLaterEvent;
- (id)installRestartEvent;
- (void)reportEventFromDaemon:(id)a0;
- (id)splatRevokedEvent;

@end
