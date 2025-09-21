@class NSString, PKAppletSubcredential;

@interface PKCarShareAcceptanceResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PKAppletSubcredential *subcredential;
@property (retain, nonatomic) NSString *passUniqueIdentifier;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCarShareAcceptanceResponse:(id)a0;

@end
