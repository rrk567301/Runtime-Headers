@interface NFTrustObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedXPCClasses;

- (id)initWithCoder:(id)a0;
- (id)allowedXPCClasses;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
