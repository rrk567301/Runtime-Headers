@interface LNVisibilityMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char isDiscoverable;
@property (readonly) char assistantOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsDiscoverable:(char)a0 assistantOnly:(char)a1;
- (char)visibleForUse:(long long)a0;

@end
