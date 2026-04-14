@class AGXG15GFamilyFragmentProgram, AGXG15GFamilyComputeProgram;

@interface AGXG15GFamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG15GFamilyComputeProgram *_compute;
    AGXG15GFamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
