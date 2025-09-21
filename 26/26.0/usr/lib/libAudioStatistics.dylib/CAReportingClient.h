@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)sharedInstance;
+ (id)getClient;
+ (void)destroyClient;

- (void)dealloc;
- (id)reporterWithID:(long long)a0;
- (void)destroyReporterWithID:(long long)a0;
- (void)stopReporter:(long long)a0;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void)reconnectReporter:(id)a0;
- (void)destroyService;
- (void)reconnectStartedReporters;
- (id)getConfigurationForReporterID:(long long)a0;
- (void)startReporter:(long long)a0;
- (void)addReporter:(id)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporter:(long long)a3;
- (id)listServerReporterIDs;
- (id)listClientReporterIDs;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)disconnectReporters;
- (void).cxx_destruct;
- (void)requestMessageWithID:(long long)a0 category:(unsigned int)a1 type:(unsigned short)a2 callback:(id /* block */)a3;
- (long long)createReporterID:(unsigned int)a0;

@end
