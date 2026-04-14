@protocol HDNearFieldInterfaceDelegate;

@interface HDNearFieldInterface : NSObject

@property (weak, nonatomic) id<HDNearFieldInterfaceDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)setFieldDetectEnabled:(BOOL)a0;
- (id)startSinglePollExpressModeAssertion:(double)a0;
- (id)releaseSinglePollExpressModeAssertion;
- (void)startFieldDetectSessionWithCompletion:(id /* block */)a0;
- (void)endFieldDetectSession;
- (BOOL)isFieldDetectSessionInProgress;
- (void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)a0 completion:(id /* block */)a1;
- (void)endNdefTagSession;
- (BOOL)isNdefTagSessionInProgress;

@end
