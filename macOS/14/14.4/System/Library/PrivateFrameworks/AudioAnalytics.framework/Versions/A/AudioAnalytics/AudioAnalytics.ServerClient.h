@class _TtC14AudioAnalytics12ServerClient;

@interface AudioAnalytics.ServerClient : NSObject {
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ idGenerator;
    void /* unknown type, empty encoding */ clientReporterStates;
}

@property (class, nonatomic, readonly) _TtC14AudioAnalytics12ServerClient *shared;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)getConfigurationForReporterID:(long long)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (void)sendSingleMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (long long)createReportingSession;
- (long long)createReportingSessionFromSessionID:(unsigned int)a0;
- (void)destroyReporterID:(long long)a0;
- (void)requestMessageForReporterID:(long long)a0 category:(unsigned int)a1 type:(unsigned short)a2 callback:(id /* block */)a3;
- (void)sendMessageForReporterID:(long long)a0 message:(id)a1 category:(unsigned int)a2 type:(unsigned short)a3;
- (void)startWithReporterID:(long long)a0;
- (void)stopWithReporterID:(long long)a0;

@end
