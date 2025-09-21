@class TPSSize;

@interface TPSSizes : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) TPSSize *compact;
@property (copy, nonatomic) TPSSize *regular;

+ (id)na_identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (double)heightToWidthRatioForViewMode:(long long)a0;

@end
