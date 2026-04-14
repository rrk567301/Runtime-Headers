@class AGXG13XFamilyComputeProgram, AGXG13XFamilyFragmentProgram;

@interface AGXG13XFamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG13XFamilyComputeProgram *_compute;
    AGXG13XFamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
