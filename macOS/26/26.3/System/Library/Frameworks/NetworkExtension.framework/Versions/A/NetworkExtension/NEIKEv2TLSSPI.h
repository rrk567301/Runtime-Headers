@interface NEIKEv2TLSSPI : NEIKEv2SPI <NSCopying>

@property (readonly, nonatomic) unsigned long long value;

- (id)initWithValue:(unsigned long long)a0;
- (unsigned long long)protocol;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copySPIData;

@end
