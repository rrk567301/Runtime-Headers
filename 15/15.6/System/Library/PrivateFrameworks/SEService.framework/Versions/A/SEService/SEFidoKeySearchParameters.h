@class NSString, NSData;

@interface SEFidoKeySearchParameters : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *relyingParty;
@property (readonly) NSString *relyingPartyAccountHash;
@property (readonly) NSData *fidoKeyHash;

+ (id)withRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
