@class NSNumber, NSString;

@interface TPSGradientStop : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *location;
@property (copy, nonatomic) NSString *colorString;

+ (id)na_identity;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithColorString:(id)a0;

@end
