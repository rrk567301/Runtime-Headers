@class NSString;

@interface TRIMASpecVer : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *specifier;
@property (readonly, nonatomic) NSString *version;

+ (id)specVerWithSpecifier:(id)a0 version:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSpecifier:(id)a0 version:(id)a1;
- (id)copyWithReplacementSpecifier:(id)a0;
- (id)copyWithReplacementVersion:(id)a0;
- (BOOL)isEqualToSpecVer:(id)a0;

@end
