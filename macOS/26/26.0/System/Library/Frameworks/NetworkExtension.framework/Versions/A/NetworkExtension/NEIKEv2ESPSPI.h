@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>

@property (readonly, nonatomic) unsigned int value;

- (id)initWithValue:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)protocol;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copySPIData;

@end
