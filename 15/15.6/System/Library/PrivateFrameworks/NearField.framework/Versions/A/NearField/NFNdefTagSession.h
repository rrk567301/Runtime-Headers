@class NSString;
@protocol NFNdefTagSessionDelegate;

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks> {
    id<NFNdefTagSessionDelegate> _delegate;
}

@property id<NFNdefTagSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)a0;

- (void).cxx_destruct;
- (void)endSession;
- (char)setTagData:(id)a0;
- (char)startEmulation:(id)a0 withMessageType:(unsigned int)a1;
- (char)startEmulation:(id)a0;
- (void)didEndUnexpectedly;
- (void)didTagStateChange:(unsigned int)a0;
- (char)enableWrite:(char)a0;
- (char)enableWrite:(char)a0 error:(id *)a1;
- (id)getTagData;
- (id)getTagDataWithError:(id *)a0;
- (id)getTagMessage;
- (id)getTagMessageWithError:(id *)a0;
- (char)setTagData:(id)a0 error:(id *)a1;
- (char)setTagMessage:(id)a0;
- (char)setTagMessage:(id)a0 error:(id *)a1;
- (char)startBluetoothLEPairingWithDeviceAddress:(id)a0 role:(unsigned char)a1 optionalOOBData:(id)a2;
- (char)startBluetoothLESecureConnectionWithDeviceAddress:(id)a0 optionalOOBData:(id)a1;
- (char)startBluetoothLESecureConnectionWithOOBData:(id)a0;
- (char)startEmulation:(id)a0 error:(id *)a1;
- (char)startEmulation:(id)a0 withMessageType:(unsigned int)a1 error:(id *)a2;
- (char)startEmulationWithNdefMessage:(id)a0;
- (char)startEmulationWithNdefMessage:(id)a0 error:(id *)a1;
- (char)startEmulationWithNdefMessage:(id)a0 withMessageType:(unsigned int)a1;
- (char)startEmulationWithNdefMessage:(id)a0 withMessageType:(unsigned int)a1 error:(id *)a2;
- (char)stopEmulation;
- (char)stopEmulationWithError:(id *)a0;

@end
