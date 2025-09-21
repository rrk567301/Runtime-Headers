@interface GFX9_MtlCounterSet : GFX9AMD_MtlCounterSet <AMD_HWL_MtlCounterSet> {
    struct GFX9_CounterSetMembersRec { union AMDMtlCounterAttributes)"hwCounters"^{GFX9_HwPerfCounters { } *counterAttribs; struct GFX9_HwPerfCounters *hwCounters; unsigned int cgRefClkFreq; unsigned int *resolveIsa; unsigned int resolveBytes; unsigned int programRsrc1; unsigned int programRsrc2; unsigned int controlDwords[10]; unsigned char numControlDwords : 8; unsigned char firstUserDataReg : 4; unsigned char usesTable : 1; unsigned int unused : 19; } _gfx9;
}

+ (id)allocCounterSets:(id)a0;

- (void)dealloc;
- (id)initStageUtilWithDevice:(id)a0;
- (id)initStatisticWithDevice:(id)a0;
- (id)initTimestampWithDevice:(id)a0;

@end
