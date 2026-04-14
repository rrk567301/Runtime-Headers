@interface NFTrustObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedXPCClasses;

- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allowedXPCClasses;

@end
