@class MTXPCConnectionProvider, MTStopwatchManagerExportedObject, MTMetrics, NSNotificationCenter, NSString;

@interface MTStopwatchManager : NSObject <MTUserDefaultNotificationObserver, MTStopwatchManagerProtocol>

@property (retain, nonatomic) MTStopwatchManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;

- (void)dealloc;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (void)reconnect;
- (id)init;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)initWithMetrics:(id)a0;
- (void).cxx_destruct;
- (id)initWithoutXpc:(BOOL)a0;
- (id)createStopwatch:(id)a0;
- (id)didAddLap:(id)a0 forStopwatch:(id)a1 sender:(id)a2;
- (id)didClearAllLapsForStopwatch:(id)a0 sender:(id)a1;
- (id)didLapLapTimerForStopwatch:(id)a0 sender:(id)a1;
- (id)didPauseLapTimerForStopwatch:(id)a0 sender:(id)a1;
- (id)didResetLapTimerForStopwatch:(id)a0 sender:(id)a1;
- (id)didResumeLapTimerForStopwatch:(id)a0 sender:(id)a1;
- (id)didStartLapTimerForStopwatch:(id)a0 sender:(id)a1;
- (id)getStopwatches;
- (id)removeStopwatch:(id)a0;
- (id)updateStopwatch:(id)a0;

@end
