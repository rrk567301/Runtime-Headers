@class AGXG13GFamilyFragmentProgram, AGXG13GFamilyComputeProgram;

@interface AGXG13GFamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG13GFamilyComputeProgram *_compute;
    AGXG13GFamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
