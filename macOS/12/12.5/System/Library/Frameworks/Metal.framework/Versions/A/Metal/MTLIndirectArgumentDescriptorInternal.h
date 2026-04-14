@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (unsigned long long)index;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setDataType:(unsigned long long)a0;
- (void)setIndex:(unsigned long long)a0;
- (void)setAccess:(unsigned long long)a0;
- (void)setArrayLength:(unsigned long long)a0;
- (unsigned long long)constantBlockAlignment;
- (unsigned long long)dataType;
- (void)setConstantBlockAlignment:(unsigned long long)a0;
- (void)setTextureType:(unsigned long long)a0;
- (unsigned long long)textureType;
- (unsigned long long)arrayLength;
- (unsigned long long)access;

@end
