@interface NFTrustObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)allowedXPCClasses;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)allowedXPCClasses;

@end
