@interface ResourceUsageLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long functionIndex;
@property long long subCommandIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithCoder:(id)a0;

@end
