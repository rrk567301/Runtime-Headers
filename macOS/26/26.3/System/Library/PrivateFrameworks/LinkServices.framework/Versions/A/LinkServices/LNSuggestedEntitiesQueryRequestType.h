@interface LNSuggestedEntitiesQueryRequestType : LNQueryRequestTypeBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)queryRequest;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
