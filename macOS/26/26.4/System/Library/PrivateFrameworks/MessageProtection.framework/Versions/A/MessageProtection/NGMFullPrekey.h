@class DHKey, NGMECDHPublicPreKey, _TtC17MessageProtection17TetraRegistration, _TtC17MessageProtection23Kyber1024ObjCPrivateKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMECDHPublicPreKey *publicPrekey;
@property (readonly, nonatomic) _TtC17MessageProtection17TetraRegistration *tetraRegistration;
@property (readonly, nonatomic) _TtC17MessageProtection23Kyber1024ObjCPrivateKey *tetraPrivateKey;

+ (id)fullPrekeyForTestingSignedBy:(id)a0;
+ (id)newCompactPrivateKey;

- (BOOL)delete;
- (id)pbDevicePrekey;
- (id)keychainData;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (BOOL)isSEPKey;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPBPrekey:(id)a0 verifySignedBy:(id)a1 error:(id *)a2;

@end
