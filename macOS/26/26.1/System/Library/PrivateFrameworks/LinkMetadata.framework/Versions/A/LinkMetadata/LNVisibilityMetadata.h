@interface LNVisibilityMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isDiscoverable;
@property (readonly) BOOL assistantOnly;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsDiscoverable:(BOOL)a0 assistantOnly:(BOOL)a1;
- (BOOL)visibleForUse:(long long)a0;

@end
