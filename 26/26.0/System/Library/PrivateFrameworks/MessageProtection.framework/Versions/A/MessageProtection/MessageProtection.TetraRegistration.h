@class NSData, _TtC17MessageProtection22Kyber1024ObjCPublicKey, TetraPublicSigningKeyWrapper;

@interface MessageProtection.TetraRegistration : NSObject {
    void /* unknown type, empty encoding */ ecdhPublicKey;
    void /* function */ signature;
}

@property (nonatomic, readonly) NSData *serializedECDHPublicKey;
@property (nonatomic, readonly) _TtC17MessageProtection22Kyber1024ObjCPublicKey *kyberPublicKey;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) unsigned int tetraVersion;
@property (nonatomic, readonly) TetraPublicSigningKeyWrapper *signingPublicKey;
@property (nonatomic, readonly) NSData *registrationData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKyberPublicKey:(id)a0 ecdhPublicKey:(id)a1 timestamp:(double)a2 version:(unsigned int)a3 signedBy:(id)a4;
- (id)initWithTetraRegistrationData:(id)a0 ecdhPublicKey:(id)a1 version:(unsigned int)a2 timestamp:(double)a3 signedBy:(id)a4 isEncrypting:(BOOL)a5 error:(id *)a6;

@end
