@class NSString, NSData, NSArray;

@interface DCCredentialCryptoKey : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_kskAttestation;
    NSData *_keyAuthorization;
    NSData *_progenitorKeyAttestation;
    NSData *_casdSignature;
    NSData *_casdAttestation;
    NSArray *_attestation;
    unsigned long long _keyUsage;
    unsigned long long _keyType;
    NSData *_publicKeyCOSEKey;
    NSData *_publicKeyIdentifier;
    NSData *_publicKey;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *publicKeyIdentifier;
@property (retain, nonatomic) NSData *publicKeyCOSEKey;
@property (nonatomic) unsigned long long keyType;
@property (nonatomic) unsigned long long keyUsage;
@property (retain, nonatomic) NSArray *attestation;
@property (retain, nonatomic) NSData *casdAttestation;
@property (retain, nonatomic) NSData *casdSignature;
@property (retain, nonatomic) NSData *progenitorKeyAttestation;
@property (retain, nonatomic) NSData *keyAuthorization;
@property (retain, nonatomic) NSArray *kskAttestation;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 attestation:(id)a6 keyAuthorization:(id)a7 kskAttestation:(id)a8;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 attestation:(id)a6;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 casdAttestation:(id)a6 keyAuthorization:(id)a7 kskAttestation:(id)a8;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 casdSignature:(id)a6 casdAttestation:(id)a7 keyAuthorization:(id)a8 kskAttestation:(id)a9;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 progenitorKeyAttestation:(id)a6 casdAttestation:(id)a7 keyAuthorization:(id)a8 kskAttestation:(id)a9;

@end
