@interface GFX9_MTLLibrary : GFX9AMD_MTLLibrary {
    struct Gfx9MtlLibraryMembersRec { unsigned int numFuncs; } _gfx9;
}

- (id)cloneFromLib:(id)a0 withDevice:(id)a1;
- (id)initWithDevice:(id)a0 packedBinary:(id)a1;

@end
