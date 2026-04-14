@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying>

@property (readonly, nonatomic) unsigned long long value;

- (id)initWithValue:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)protocol;
- (id)init;
- (id)copySPIData;

@end
