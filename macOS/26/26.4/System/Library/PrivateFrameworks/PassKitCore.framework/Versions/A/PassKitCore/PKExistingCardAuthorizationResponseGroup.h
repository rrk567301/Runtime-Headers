@interface PKExistingCardAuthorizationResponseGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToGroup:(id)a0;

@end
