@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (unsigned long long)textureType;
- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (unsigned long long)arrayLength;
- (void)setDataType:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)dataType;
- (id)init;
- (unsigned long long)access;
- (id)description;
- (void)setTextureType:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setArrayLength:(unsigned long long)a0;
- (unsigned long long)constantBlockAlignment;
- (void)setAccess:(unsigned long long)a0;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
