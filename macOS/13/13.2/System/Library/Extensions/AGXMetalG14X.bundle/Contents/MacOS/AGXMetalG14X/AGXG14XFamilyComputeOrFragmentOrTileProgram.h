@class AGXG14XFamilyComputeProgram, AGXG14XFamilyFragmentProgram;

@interface AGXG14XFamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG14XFamilyComputeProgram *_compute;
    AGXG14XFamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
