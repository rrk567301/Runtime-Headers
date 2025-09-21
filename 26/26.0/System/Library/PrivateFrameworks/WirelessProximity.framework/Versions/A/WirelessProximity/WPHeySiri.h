@protocol WPHeySiriProtocol;

@interface WPHeySiri : WPClient

@property (weak, nonatomic) id<WPHeySiriProtocol> delegate;
@property BOOL isScanning;

+ (long long)holdVouchers;

- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)deviceDiscovered:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)startScanningAndAdvertisingWithData:(id)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stopAdvertising;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)startScanning;
- (void)startScanningAndAdvertisingWithOptions:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)advertisingStartedOfTypeAt:(unsigned char)a0;
- (void)invalidate;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)stopScanning;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)stopScanningAndAdvertising;
- (void)startAdvertisingWithData:(id)a0;
- (void).cxx_destruct;

@end
