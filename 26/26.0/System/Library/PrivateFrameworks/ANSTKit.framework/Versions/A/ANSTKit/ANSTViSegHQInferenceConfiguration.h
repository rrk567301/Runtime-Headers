@interface ANSTViSegHQInferenceConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long resolution;

+ (id)new;
+ (id)availableInferenceResolutionForVersion:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 resolution:(long long)a1;

@end
