@class NSString, NSData;

@interface SEFidoKey : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *relyingParty;
@property (readonly) NSString *relyingPartyAccountHash;
@property (readonly) NSData *fidoAttestation;
@property (readonly) NSData *fidoPublicKey;
@property (readonly) NSData *fidoKeyHash;

+ (id)withRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoPublicKey:(id)a2 fidoAttestation:(id)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
