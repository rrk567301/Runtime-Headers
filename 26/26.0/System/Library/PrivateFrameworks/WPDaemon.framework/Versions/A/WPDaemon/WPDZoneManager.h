@class CBCentralManager, NSMutableDictionary, NSString, NSDate, NSObject, NSNumber;
@protocol OS_dispatch_source;

@interface WPDZoneManager : WPDManager <CBCentralManagerDelegate>

@property (retain, nonatomic) NSMutableDictionary *trackRequests;
@property (retain, nonatomic) NSMutableDictionary *trackedZones;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_source> *exitTimer;
@property (retain, nonatomic) NSNumber *zoneExitTimeout;
@property (retain, nonatomic) NSDate *lastTimeScannerStarted;
@property (readonly, nonatomic) BOOL scanAllowlisted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanup;
- (void)cancelExitTimer;
- (void)centralManager:(id)a0 didLoseZone:(id)a1 mask:(id)a2;
- (void)addSingleZoneTrackingRequest:(id)a0 forClient:(id)a1;
- (BOOL)updateScanner;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)unregisterZones:(id)a0 forClient:(id)a1;
- (void)unregisterZonesForClient:(id)a0 updateScanner:(BOOL)a1;
- (id)generateStateDumpStrings;
- (void)update;
- (void)printTrackedZones;
- (void)exitTimerFired;
- (void)unregisterAllZones;
- (void)startExitTimer;
- (void)unregisterZonesForClient:(id)a0;
- (id)initWithServer:(id)a0;
- (id)getAllZones;
- (void).cxx_destruct;
- (id)addZoneTrackingRequest:(id)a0 forClient:(id)a1;

@end
