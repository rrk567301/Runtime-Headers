@class NSString, PKAppletSubcredential;

@interface PKCarShareAcceptanceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKAppletSubcredential *subcredential;
@property (retain, nonatomic) NSString *passUniqueIdentifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToCarShareAcceptanceResponse:(id)a0;

@end
