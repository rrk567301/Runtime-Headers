@class AGXG15XFamilyFragmentProgram, AGXG15XFamilyComputeProgram;

@interface AGXG15XFamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG15XFamilyComputeProgram *_compute;
    AGXG15XFamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
