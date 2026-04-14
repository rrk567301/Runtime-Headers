@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (unsigned long long)index;
- (unsigned long long)dataType;
- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)arrayLength;
- (unsigned long long)access;
- (unsigned long long)textureType;
- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setDataType:(unsigned long long)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setArrayLength:(unsigned long long)a0;
- (void)setTextureType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)constantBlockAlignment;
- (void)setAccess:(unsigned long long)a0;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
