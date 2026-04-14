@class NSMutableArray, NSMutableDictionary;
@protocol WPDeviceScannerDelegate;

@interface WPDeviceScanner : WPClient

@property (weak, nonatomic) id<WPDeviceScannerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *liveDevices;
@property (retain, nonatomic) NSMutableDictionary *activeScans;
@property (nonatomic) BOOL anyScanResultsRequested;

- (void)registerForAnyScanResults:(BOOL)a0;
- (void)invalidate;
- (void)deviceDiscovered:(id)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)clientAsString;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)anyDiscoveredDevice:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)description;
- (void)unregisterAllDeviceChanges;
- (BOOL)parseType:(unsigned char)a0 atOffset:(char *)a1 withSize:(int)a2 intoDictionary:(id)a3;
- (void)postDevices:(id)a0;
- (void)unregisterForDevices:(id)a0;
- (void).cxx_destruct;
- (void)parseCompanyData:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (void)parseAirPrint:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (void)registerForDevicesMatching:(id)a0 options:(id)a1;
- (void)postDevice:(id)a0;
- (void)timerFinished:(id)a0;
- (void)addPuckType:(id)a0 toDictionary:(id)a1;

@end
