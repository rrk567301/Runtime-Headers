@interface GFX10_MTLLibrary : GFXAAMD_MTLLibrary {
    struct Gfx10MtlLibraryMembersRec { unsigned int numFuncs; } _gfx10;
}

- (id)cloneFromLib:(id)a0 withDevice:(id)a1;
- (id)initWithDevice:(id)a0 packedBinary:(id)a1;

@end
