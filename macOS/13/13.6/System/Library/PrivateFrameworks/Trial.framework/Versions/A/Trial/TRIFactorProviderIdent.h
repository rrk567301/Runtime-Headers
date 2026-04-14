@class NSString;

@interface TRIFactorProviderIdent : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *value;

+ (id)identWithType:(unsigned char)a0 value:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 value:(id)a1;
- (BOOL)isEqualToIdent:(id)a0;
- (id)copyWithReplacementType:(unsigned char)a0;
- (id)copyWithReplacementValue:(id)a0;

@end
