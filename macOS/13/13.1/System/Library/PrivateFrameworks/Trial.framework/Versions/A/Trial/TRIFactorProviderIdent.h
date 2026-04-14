@class NSString;

@interface TRIFactorProviderIdent : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *value;

+ (id)identWithType:(unsigned char)a0 value:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 value:(id)a1;
- (id)copyWithReplacementType:(unsigned char)a0;
- (id)copyWithReplacementValue:(id)a0;
- (BOOL)isEqualToIdent:(id)a0;

@end
