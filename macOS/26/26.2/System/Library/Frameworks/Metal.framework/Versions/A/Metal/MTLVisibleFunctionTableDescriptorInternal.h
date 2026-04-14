@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor {
    struct MTLVisibleFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)setForceResourceIndex:(BOOL)a0;
- (BOOL)forceResourceIndex;
- (void)setResourceIndex:(unsigned long long)a0;
- (unsigned long long)resourceIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (unsigned long long)functionCount;
- (void)setFunctionCount:(unsigned long long)a0;

@end
