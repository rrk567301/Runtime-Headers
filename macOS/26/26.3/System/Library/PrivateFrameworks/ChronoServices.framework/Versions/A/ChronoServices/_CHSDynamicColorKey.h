@interface _CHSDynamicColorKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long colorScheme;
@property (readonly, nonatomic) unsigned long long displayGamut;

+ (id)_darkP3;
+ (unsigned long long)maxPermutations;
+ (id)_darkSRGB;
+ (id)_lightP3;
+ (id)_lightSRGB;
+ (id)instanceForEncodingKey:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_encodingKey;
- (id)initWithColorScheme:(unsigned long long)a0 displayGamut:(unsigned long long)a1;

@end
