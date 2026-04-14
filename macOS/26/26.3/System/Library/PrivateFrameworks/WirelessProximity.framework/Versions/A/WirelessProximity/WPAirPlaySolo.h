@protocol WPAirPlaySoloDelegate;

@interface WPAirPlaySolo : WPClient

@property (weak, nonatomic) id<WPAirPlaySoloDelegate> delegate;

+ (id)puckTypeToString:(unsigned char)a0;
+ (unsigned char)puckStringToType:(id)a0;

- (void)invalidate;
- (void)peerTrackingFull;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (void)deviceDiscovered:(id)a0;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (void)stopConnectionlessAdvertising;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)peerTrackingAvailable;
- (void)scanningStartedOfType:(unsigned char)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)clientAsString;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (id)init;
- (void)stopTrackingPeer:(id)a0 withData:(id)a1;
- (void)stopConnectionlessAdvertising:(id)a0;
- (void).cxx_destruct;
- (void)startTrackingPeer:(id)a0 withData:(id)a1;
- (void)startConnectionlessAdvertisingWithData:(id)a0;
- (void)stopConnectionlessScanningWithData:(id)a0;
- (void)startConnectionlessScanningWithData:(id)a0;

@end
