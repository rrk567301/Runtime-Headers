@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>

@property (readonly, nonatomic) unsigned int value;

- (unsigned long long)protocol;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned int)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copySPIData;

@end
