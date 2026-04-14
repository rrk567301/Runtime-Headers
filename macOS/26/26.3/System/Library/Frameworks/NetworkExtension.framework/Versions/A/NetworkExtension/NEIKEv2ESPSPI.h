@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying>

@property (readonly, nonatomic) unsigned int value;

- (id)initWithValue:(unsigned int)a0;
- (unsigned long long)protocol;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copySPIData;

@end
