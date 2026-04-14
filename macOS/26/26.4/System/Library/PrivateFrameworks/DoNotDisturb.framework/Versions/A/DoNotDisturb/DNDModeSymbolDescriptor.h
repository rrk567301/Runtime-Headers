@class NSArray, NSString;

@interface DNDModeSymbolDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *tintColorNames;
@property (readonly, copy) NSString *primaryTintColorName;
@property (readonly) unsigned long long tintStyle;
@property (readonly, copy) NSString *imageName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTintStyle:(unsigned long long)a0 tintColorNames:(id)a1 imageName:(id)a2;
- (id)primaryTintColorName;

@end
