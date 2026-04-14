@class AGXG14FamilyComputeProgram, AGXG14FamilyFragmentProgram;

@interface AGXG14FamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXG14FamilyComputeProgram *_compute;
    AGXG14FamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
