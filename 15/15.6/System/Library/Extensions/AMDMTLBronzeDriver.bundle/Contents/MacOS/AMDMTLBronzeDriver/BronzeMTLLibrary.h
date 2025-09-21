@interface BronzeMTLLibrary : AMD_MTLLibrary {
    struct BronzeMtlLibraryMembersRec { unsigned int numFuncs; } _gfx10;
}

- (id)cloneFromLib:(id)a0 withDevice:(id)a1;
- (id)initWithDevice:(id)a0 packedBinary:(id)a1;

@end
