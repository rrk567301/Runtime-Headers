@interface NFTrustObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedXPCClasses;

- (id)allowedXPCClasses;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
