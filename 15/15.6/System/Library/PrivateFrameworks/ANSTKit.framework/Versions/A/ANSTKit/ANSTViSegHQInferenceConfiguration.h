@interface ANSTViSegHQInferenceConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char useE5;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long resolution;

+ (id)new;
+ (id)availableInferenceResolutionForVersion:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 resolution:(long long)a1;

@end
