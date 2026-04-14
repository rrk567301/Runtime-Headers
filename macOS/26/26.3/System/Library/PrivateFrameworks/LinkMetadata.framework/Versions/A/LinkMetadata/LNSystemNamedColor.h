@class NSData, NSString;

@interface LNSystemNamedColor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long systemColor;
@property (nonatomic) unsigned long long colorVariant;
@property (readonly, nonatomic) NSData *tintColorData;
@property (readonly, nonatomic) NSString *tintColorPlatform;
@property (readonly, nonatomic) id platformTintColor;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSystemColor:(unsigned long long)a0 variant:(unsigned long long)a1;
- (id)initUnsafeWithSystemColor:(unsigned long long)a0 variant:(unsigned long long)a1;

@end
