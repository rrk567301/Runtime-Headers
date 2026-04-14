@class AGXG14GFamilyFragmentProgram, AGXG14GFamilyComputeProgram;

@interface AGXG14GFamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG14GFamilyComputeProgram *_compute;
    AGXG14GFamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
