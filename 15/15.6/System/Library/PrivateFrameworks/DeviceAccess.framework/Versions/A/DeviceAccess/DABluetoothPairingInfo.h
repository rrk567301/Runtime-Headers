@class NSUUID, NSNumber;

@interface DABluetoothPairingInfo : NSObject <CUXPCCodable>

@property (nonatomic) char accept;
@property (readonly, nonatomic) NSUUID *bluetoothIdentifier;
@property (readonly, nonatomic) long long pairingType;
@property (retain, nonatomic) NSNumber *passkey;
@property (readonly, nonatomic) char pairedWithCTKD;
@property (readonly, nonatomic) char pairingRequired;
@property (readonly, nonatomic) char appConfirmsAuth;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithBluetoothIdentifier:(id)a0 pairedCTKD:(char)a1 appConfirmsAuth:(char)a2 pairingRequired:(char)a3;
- (id)initWithBluetoothIdentifier:(id)a0 pairingType:(long long)a1;

@end
