@class NSString;

@interface TRIFactorProviderIdent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *value;

+ (id)identWithType:(unsigned char)a0 value:(id)a1;

- (id)copyWithReplacementType:(unsigned char)a0;
- (id)initWithType:(unsigned char)a0 value:(id)a1;
- (id)description;
- (id)init;
- (BOOL)isEqualToIdent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementValue:(id)a0;

@end
