@class NSString, CLDispatchSilo, NSData, CLLocationManager, NSMutableDictionary;

@interface CLIdentifiableClientConnectionManager : NSObject <CLIdentifiableClientProtocol> {
    CLDispatchSilo *_silo;
    void *_locationdConnection;
    NSString *_startMessageName;
    NSMutableDictionary *_startMessagePayload;
    id /* block */ _responseHandler;
    double _lastHistoricalLocationTimestamp;
}

@property BOOL shouldBeRunning;
@property BOOL started;
@property (retain, nonatomic) NSString *identityToken;
@property (retain, nonatomic) NSData *storageToken;
@property (retain, nonatomic) CLLocationManager *manager;
@property (weak, nonatomic) id /* block */ weakClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)tearDown;
- (void)_start;
- (void)createConnection;
- (void)dealloc;
- (void)resume;
- (void).cxx_destruct;
- (void)_pauseLocationUpdater;
- (void)_resumeLocationUpdater;
- (void)destroyConnection;
- (void)handleResponseMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithSilo:(id)a0 locationManager:(id)a1 startMessageName:(id)a2 startMessagePayload:(id)a3 responseHandler:(id /* block */)a4;
- (id)initWithStartMessageName:(id)a0 startMessagePayload:(id)a1 locationManager:(id)a2 responseHandler:(id /* block */)a3;
- (id)initWithStartMessageName:(id)a0 startMessagePayload:(id)a1 responseHandler:(id /* block */)a2;
- (void)manageConnection;
- (void)updateIdentityToken:(id)a0 withStorageToken:(id)a1;
- (void)updateLastHistoricalLocationTimestamp:(double)a0;

@end
