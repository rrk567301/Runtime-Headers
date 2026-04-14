@interface MTLIntersectionFunctionTableDescriptorInternal : MTLIntersectionFunctionTableDescriptor {
    struct MTLIntersectionFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)forceResourceIndex;
- (void)setResourceIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)resourceIndex;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setForceResourceIndex:(BOOL)a0;
- (unsigned long long)functionCount;
- (void)setFunctionCount:(unsigned long long)a0;

@end
