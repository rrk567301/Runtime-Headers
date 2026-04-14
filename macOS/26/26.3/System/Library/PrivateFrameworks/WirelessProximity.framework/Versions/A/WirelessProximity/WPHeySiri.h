@protocol WPHeySiriProtocol;

@interface WPHeySiri : WPClient

@property (weak, nonatomic) id<WPHeySiriProtocol> delegate;
@property BOOL isScanning;

+ (long long)holdVouchers;

- (void)invalidate;
- (void)stopAdvertising;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)startScanning;
- (id)clientAsString;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)startScanningAndAdvertisingWithData:(id)a0;
- (void)startScanningAndAdvertisingWithOptions:(id)a0;
- (void)startAdvertisingWithData:(id)a0;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)advertisingStartedOfTypeAt:(unsigned char)a0;
- (void).cxx_destruct;
- (void)stopScanning;
- (void)stopScanningAndAdvertising;

@end
