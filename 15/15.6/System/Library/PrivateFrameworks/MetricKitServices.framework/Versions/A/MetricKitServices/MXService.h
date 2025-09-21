@class NSString;

@interface MXService : NSObject

@property (readonly) char isStarted;
@property (readonly) long long sourceID;
@property (retain) NSString *currentClient;

- (id)init;
- (void).cxx_destruct;
- (char)startService;
- (char)stopService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (id)getMetricsForClient:(id)a0;
- (char)metricsAvailable;
- (char)metricsSupported;
- (char)diagnosticsAvailable;
- (char)diagnosticsSupported;
- (id)initWithSourceID:(long long)a0;
- (id)pruneSourceData:(id)a0;

@end
