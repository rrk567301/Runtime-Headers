@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {
    unsigned int _value;
}

@property (readonly) unsigned int value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(unsigned int)a0;

@end
