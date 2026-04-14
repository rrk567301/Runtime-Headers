@class NSMutableArray, NSMutableDictionary;
@protocol WPDeviceScannerDelegate;

@interface WPDeviceScanner : WPClient

@property (weak, nonatomic) id<WPDeviceScannerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *liveDevices;
@property (retain, nonatomic) NSMutableDictionary *activeScans;
@property (nonatomic) BOOL anyScanResultsRequested;

- (void)scanningStartedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (id)clientAsString;
- (void)deviceDiscovered:(id)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (id)initWithDelegate:(id)a0;
- (BOOL)parseType:(unsigned char)a0 atOffset:(char *)a1 withSize:(int)a2 intoDictionary:(id)a3;
- (void)postDevices:(id)a0;
- (void)registerForAnyScanResults:(BOOL)a0;
- (void)unregisterAllDeviceChanges;
- (void)timerFinished:(id)a0;
- (void)anyDiscoveredDevice:(id)a0;
- (void)addPuckType:(id)a0 toDictionary:(id)a1;
- (void).cxx_destruct;
- (void)parseAirPrint:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (void)invalidate;
- (void)postDevice:(id)a0;
- (void)registerForDevicesMatching:(id)a0 options:(id)a1;
- (id)description;
- (void)unregisterForDevices:(id)a0;
- (void)parseCompanyData:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;

@end
