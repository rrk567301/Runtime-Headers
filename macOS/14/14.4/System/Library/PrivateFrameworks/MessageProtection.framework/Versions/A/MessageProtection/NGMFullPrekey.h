@class DHKey, NGMECDHPublicPreKey, _TtC17MessageProtection17TetraRegistration, _TtC17MessageProtection23Kyber1024ObjCPrivateKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMECDHPublicPreKey *publicPrekey;
@property (readonly, nonatomic) _TtC17MessageProtection17TetraRegistration *secondaryRegistration;
@property (readonly, nonatomic) _TtC17MessageProtection23Kyber1024ObjCPrivateKey *secondaryPrivateKey;

+ (BOOL)hasSEP;
+ (id)fullPrekeyForTestingSignedBy:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)delete;
- (id)ecdhKeyCTKObject;
- (id)initWithPBPrekey:(id)a0 verifySignedBy:(id)a1 error:(id *)a2;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (id)pbDevicePrekey;

@end
