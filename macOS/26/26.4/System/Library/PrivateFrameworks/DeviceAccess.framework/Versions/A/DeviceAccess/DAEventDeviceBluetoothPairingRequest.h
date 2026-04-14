@class DABluetoothPairingInfo;

@interface DAEventDeviceBluetoothPairingRequest : DAEvent

@property (copy, nonatomic) DABluetoothPairingInfo *pairingInfo;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 pairingInfo:(id)a1;

@end
