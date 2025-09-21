@class NSString, CLIdentifiableClientConnectionManager, CLDispatchSilo, NSMutableDictionary;

@interface CLLocationUpdater : NSObject {
    CLDispatchSilo *_silo;
    id /* block */ _clientCallback;
    NSString *_messageName;
    NSMutableDictionary *_mutableMsgDictionary;
}

@property (retain, nonatomic) CLIdentifiableClientConnectionManager *connectionManager;

+ (id)historicalUpdaterWithDateInterval:(id)a0 sampleCount:(int)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)liveUpdaterWithQueue:(id)a0 handler:(id /* block */)a1;
+ (id)_historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 dateInterval:(id)a2 sampleCount:(int)a3 queue:(id)a4 handler:(id /* block */)a5;
+ (id)liveUpdaterWithConfiguration:(long long)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 dateInterval:(id)a2 sampleCount:(int)a3 queue:(id)a4 handler:(id /* block */)a5;
+ (id)_liveUpdaterWithQueue:(id)a0 handler:(id /* block */)a1;
+ (id)_historicalUpdaterWithDateInterval:(id)a0 sampleCount:(int)a1 queue:(id)a2 handler:(id /* block */)a3;
+ (id)_liveUpdaterWithConfiguration:(long long)a0 queue:(id)a1 handler:(id /* block */)a2;
+ (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 dateInterval:(id)a2 sampleCount:(int)a3 locationManager:(id)a4 queue:(id)a5 handler:(id /* block */)a6;
+ (id)historicalUpdaterWithDateInterval:(id)a0 sampleCount:(int)a1 locationManager:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
+ (id)liveUpdaterWithConfiguration:(long long)a0 locationManager:(id)a1 queue:(id)a2 handler:(id /* block */)a3;

- (void)pause;
- (void)tearDown;
- (void)dealloc;
- (void)invalidate;
- (void)setHandler:(id /* block */)a0;
- (void)resume;
- (void)handleMessageDiagnostics:(id)a0;
- (void)handleMessageHistoricalLocations:(id)a0;
- (void)handleMessageHistoricalLocationsFinished:(id)a0;
- (void)handleMessageLocation:(id)a0;
- (void)handleMessageLocationUnavailable:(id)a0;
- (void)handleMessageWithName:(id)a0 payload:(id)a1;
- (id)initWithRegistrationMessageName:(const char *)a0 messagePayload:(id)a1 locationManager:(id)a2 queue:(id)a3 handler:(id /* block */)a4;

@end
