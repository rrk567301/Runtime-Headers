@class NSData;

@interface DCPresentmentRequest : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *sessionEstablishment;
@property (nonatomic, copy) NSData *sessionTranscript;
@property (nonatomic, copy) NSData *sessionEncryptionIntermediateKeyMaterial;
@property (nonatomic, copy) NSData *requiredPublicKeyIdentifier;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSessionEstablishment:(id)a0 sessionTranscript:(id)a1;

@end
