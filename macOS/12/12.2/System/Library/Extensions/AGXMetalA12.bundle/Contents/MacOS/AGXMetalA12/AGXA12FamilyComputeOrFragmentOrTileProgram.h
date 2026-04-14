@class AGXA12FamilyFragmentProgram, AGXA12FamilyComputeProgram;

@interface AGXA12FamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXA12FamilyComputeProgram *_compute;
    AGXA12FamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
