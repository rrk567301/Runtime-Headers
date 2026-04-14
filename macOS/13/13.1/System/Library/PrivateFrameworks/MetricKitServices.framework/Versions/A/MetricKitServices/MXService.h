@class NSString;

@interface MXService : NSObject

@property (readonly) BOOL isStarted;
@property (readonly) long long sourceID;
@property (retain) NSString *currentClient;

- (id)init;
- (void).cxx_destruct;
- (BOOL)startService;
- (BOOL)stopService;
- (BOOL)metricsSupported;
- (id)getMetricsForClient:(id)a0;
- (BOOL)metricsAvailable;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (id)initWithSourceID:(long long)a0;
- (BOOL)diagnosticsAvailable;
- (BOOL)diagnosticsSupported;
- (id)pruneSourceData:(id)a0;

@end
