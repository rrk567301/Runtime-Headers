@class NSString;

@interface TRIFullMAAssetId : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *specifier;
@property (readonly, nonatomic) NSString *version;

+ (id)identWithType:(id)a0 specifier:(id)a1 version:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementType:(id)a0;
- (BOOL)isEqualToIdent:(id)a0;
- (id)copyWithReplacementSpecifier:(id)a0;
- (id)copyWithReplacementVersion:(id)a0;
- (id)initWithType:(id)a0 specifier:(id)a1 version:(id)a2;

@end
