@interface NEIKEv2TLSSPI : NEIKEv2SPI <NSCopying>

@property (readonly, nonatomic) unsigned long long value;

- (unsigned long long)protocol;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned long long)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copySPIData;

@end
