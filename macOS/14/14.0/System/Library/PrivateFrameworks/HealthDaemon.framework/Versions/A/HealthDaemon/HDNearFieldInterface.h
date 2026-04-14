@protocol HDNearFieldInterfaceDelegate;

@interface HDNearFieldInterface : NSObject

@property (weak, nonatomic) id<HDNearFieldInterfaceDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)setFieldDetectEnabled:(BOOL)a0;
- (id)releaseSinglePollExpressModeAssertion;
- (id)startSinglePollExpressModeAssertion:(double)a0;
- (void)endFieldDetectSession;
- (void)endNdefTagSession;
- (BOOL)isFieldDetectSessionInProgress;
- (BOOL)isNdefTagSessionInProgress;
- (void)startFieldDetectSessionWithCompletion:(id /* block */)a0;
- (void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)a0 completion:(id /* block */)a1;

@end
