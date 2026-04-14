@class NSUUID, NSNumber;

@interface DABluetoothPairingInfo : NSObject <CUXPCCodable>

@property (nonatomic) BOOL accept;
@property (readonly, nonatomic) NSUUID *bluetoothIdentifier;
@property (readonly, nonatomic) long long pairingType;
@property (retain, nonatomic) NSNumber *passkey;
@property (readonly, nonatomic) BOOL pairedWithCTKD;
@property (readonly, nonatomic) BOOL pairingRequired;
@property (readonly, nonatomic) BOOL appConfirmsAuth;
@property (readonly, nonatomic) BOOL secureConnectionPairing;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBluetoothIdentifier:(id)a0 pairedCTKD:(BOOL)a1 appConfirmsAuth:(BOOL)a2 pairingRequired:(BOOL)a3 btSCPairing:(BOOL)a4;
- (id)initWithBluetoothIdentifier:(id)a0 pairingType:(long long)a1;

@end
