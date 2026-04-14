@protocol WPAirPlaySoloDelegate;

@interface WPAirPlaySolo : WPClient

@property (weak, nonatomic) id<WPAirPlaySoloDelegate> delegate;

+ (id)puckTypeToString:(unsigned char)a0;
+ (unsigned char)puckStringToType:(id)a0;

- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)invalidate;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)peerTrackingFull;
- (void)stateDidChange:(long long)a0;
- (void)peerTrackingAvailable;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (id)clientAsString;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)stopConnectionlessAdvertising;
- (void)stopConnectionlessAdvertising:(id)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (void)startTrackingPeer:(id)a0 withData:(id)a1;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)stopConnectionlessScanningWithData:(id)a0;
- (id)init;
- (void)startConnectionlessScanningWithData:(id)a0;
- (void)stopTrackingPeer:(id)a0 withData:(id)a1;
- (void)startConnectionlessAdvertisingWithData:(id)a0;

@end
