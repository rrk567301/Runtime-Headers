@class NSMutableArray, NSMutableDictionary;
@protocol WPDeviceScannerDelegate;

@interface WPDeviceScanner : WPClient

@property (weak, nonatomic) id<WPDeviceScannerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *liveDevices;
@property (retain, nonatomic) NSMutableDictionary *activeScans;
@property (nonatomic) char anyScanResultsRequested;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)stateDidChange:(long long)a0;
- (void)addPuckType:(id)a0 toDictionary:(id)a1;
- (void)anyDiscoveredDevice:(id)a0;
- (id)clientAsString;
- (void)deviceDiscovered:(id)a0;
- (void)parseAirPrint:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (void)parseCompanyData:(char *)a0 forSize:(int)a1 intoDictionary:(id)a2;
- (char)parseType:(unsigned char)a0 atOffset:(char *)a1 withSize:(int)a2 intoDictionary:(id)a3;
- (void)postDevice:(id)a0;
- (void)postDevices:(id)a0;
- (void)registerForAnyScanResults:(BOOL)a0;
- (void)registerForDevicesMatching:(id)a0 options:(id)a1;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)timerFinished:(id)a0;
- (void)unregisterAllDeviceChanges;
- (void)unregisterForDevices:(id)a0;

@end
