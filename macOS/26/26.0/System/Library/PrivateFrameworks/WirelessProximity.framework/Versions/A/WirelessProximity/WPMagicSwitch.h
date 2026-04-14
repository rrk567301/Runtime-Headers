@protocol WPMagicSwitchDelegate;

@interface WPMagicSwitch : WPClient

@property (weak, nonatomic) id<WPMagicSwitchDelegate> delegate;

- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)deviceDiscovered:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stopAdvertising;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)invalidate;
- (void)stopScanning;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)startAdvertisingWithData:(id)a0;
- (struct { long long x0; long long x1; long long x2; })dutyCycleToScanningRates:(long long)a0;
- (void).cxx_destruct;
- (void)startScanningWithData:(id)a0;

@end
