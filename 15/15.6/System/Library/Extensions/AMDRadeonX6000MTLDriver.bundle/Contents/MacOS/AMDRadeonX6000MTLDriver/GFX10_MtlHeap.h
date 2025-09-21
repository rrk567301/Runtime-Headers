@interface GFX10_MtlHeap : GFXAAMD_MtlHeap {
    struct GFX10_HeapMembers { unsigned int unused; } _gfx10;
}

- (id)newAccelerationStructureWithSize:(unsigned long long)a0;
- (id)newAccelerationStructureWithSize:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
