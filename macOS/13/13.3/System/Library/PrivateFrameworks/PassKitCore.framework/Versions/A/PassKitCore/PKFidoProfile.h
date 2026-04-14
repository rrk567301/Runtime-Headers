@class NSString;

@interface PKFidoProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *accountHash;
@property (retain, nonatomic) NSString *keyHash;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
