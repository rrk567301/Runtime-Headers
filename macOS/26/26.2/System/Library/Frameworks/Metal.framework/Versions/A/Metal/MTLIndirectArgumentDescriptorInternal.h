@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    struct MTLArgumentDescriptorPrivate { unsigned long long dataType; unsigned long long index; unsigned long long arrayLength; unsigned long long access; unsigned long long textureType; unsigned long long constantBlockAlignment; } _private;
}

+ (id)indirectArgumentDescriptor;

- (unsigned long long)access;
- (unsigned long long)index;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)textureType;
- (unsigned long long)arrayLength;
- (id)formattedDescription:(unsigned long long)a0;
- (void)setDataType:(unsigned long long)a0;
- (id)description;
- (void)setArrayLength:(unsigned long long)a0;
- (void)setTextureType:(unsigned long long)a0;
- (void)setIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)constantBlockAlignment;
- (void)setAccess:(unsigned long long)a0;
- (void)setConstantBlockAlignment:(unsigned long long)a0;

@end
