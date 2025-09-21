@interface BronzeMtlCounterSet : MTLCounterSetInternal {
    struct BronzeCounterSetMembersRec { unsigned short apiBytesPerSample; unsigned short hwBytesPerSample; unsigned short sampleMask; unsigned short unused; unsigned int *shaderCode; unsigned int shaderBytes; unsigned int rsrc1; unsigned int rsrc2; unsigned int cgRefClockFreq; unsigned int bufferTable; unsigned int firstUserDataReg; unsigned int numControlDwords; unsigned int controlDWords[10]; void /* function */ *sampleFunc; void /* function */ *cpuResolveFunc; union BronzeCounterAttributes)"hwCounters"^{BronzeGpuHWCounters { } *counterAttributes; struct BronzeGpuHWCounters *hwCounters; struct BronzeHwInfoRec *hwInfo; struct BronzeHwPerfCounterInfoRec *hwPerfCounterInfo; } _cusn;
}

- (void)dealloc;
- (id)initStageUtilWithDevice:(id)a0;
- (id)initStatisticWithDevice:(id)a0;
- (id)initTimestampWithDevice:(id)a0;

@end
