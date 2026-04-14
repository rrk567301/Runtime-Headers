@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)sharedInstance;
+ (void)destroyClient;
+ (id)getClient;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startReporters:(id)a0;
- (id)reporterWithID:(long long)a0;
- (void)addReporter:(id)a0;
- (long long)createReporterID:(unsigned int)a0;
- (void)destroyReporterWithID:(long long)a0;
- (void)destroyService;
- (void)disconnectReporters;
- (id)getConfigurationForReporterID:(long long)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;
- (id)listClientReporterIDs;
- (id)listServerReporterIDs;
- (void)reconnectReporter:(id)a0;
- (void)reconnectStartedReporters;
- (void)requestMessageWithID:(long long)a0 category:(unsigned int)a1 type:(unsigned short)a2 callback:(id /* block */)a3;
- (void)sendClientAction:(id)a0 reporterID:(long long)a1;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporters:(id)a3;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void)stopReporters:(id)a0;

@end
