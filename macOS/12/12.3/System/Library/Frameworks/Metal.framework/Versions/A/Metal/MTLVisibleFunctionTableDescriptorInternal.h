@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor {
    struct MTLVisibleFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)resourceIndex;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)functionCount;
- (BOOL)forceResourceIndex;
- (void)setFunctionCount:(unsigned long long)a0;
- (void)setForceResourceIndex:(BOOL)a0;
- (void)setResourceIndex:(unsigned long long)a0;

@end
