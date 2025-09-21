@interface GFX9AMD_MtlCounterSet : MTLCounterSetInternal {
    struct AMD_MtlCounterSetMembersRec { void /* function */ *cpuResolveFunc; void /* function */ *sampleFunc; unsigned short apiBytesPerSample; unsigned short hwBytesPerSample; unsigned short sampleMask; unsigned short unused; } _amd;
}

- (void)dealloc;
- (id)initStageUtilWithDevice:(id)a0;
- (id)initStatisticWithDevice:(id)a0;
- (id)initTimestampWithDevice:(id)a0;

@end
