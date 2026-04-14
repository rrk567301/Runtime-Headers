@protocol WPAWDLDelegate;

@interface WPAWDL : WPClient

@property (weak, nonatomic) id<WPAWDLDelegate> delegate;
@property BOOL useSmallerAirDrop;

+ (id)hashEmail:(id)a0;
+ (id)generateDataFromEmails:(id)a0;

- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)invalidate;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)stateDidChange:(long long)a0;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (id)clientAsString;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)stopConnectionlessAWDLServiceScanning;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)startConnectionlessAWDLServiceAdvertisingWithData:(id)a0;
- (void)stopConnectionlessAWDLServiceAdvertising;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (void)startConnectionlessAWDLServiceScanning;
- (id)initWithDelegate:(id)a0;

@end
