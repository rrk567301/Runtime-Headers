@class NSString, NSArray, IGGPURawCounterSourceGroup, NSMutableArray;

@interface IGGPURawCounterSource : _GPURawCounterSource {
    IGGPURawCounterSourceGroup *_sourceGroupIGAccel;
    NSString *_metricSetName;
    unsigned int _metricCount;
    NSArray *_availableMetrics;
    struct IGMDAPIMetal { void /* function */ **x0; unsigned int x1; struct MDAPIGfxCapsRec { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; } x2; struct IGTelemetryGPU *x3; struct _WA_TABLE *x4; struct MDAPIConfigRegs *x5; struct MDAPIConfigRegs *x6; void *x7; char *x8[64]; char *x9[64]; struct IGTelemetryMetal *x10; } *pMTLIGInterfaceMDAPI;
    unsigned int _ioBufferSize;
    char *_pOABufferCpuAddress_source;
    struct vector<_MetricInfo, std::allocator<_MetricInfo>> { struct _MetricInfo *__begin_; struct _MetricInfo *__end_; struct __compressed_pair<_MetricInfo *, std::allocator<_MetricInfo>> { struct _MetricInfo *__value_; } __end_cap_; } _requestedCounters;
    unsigned long long *_pPollBuffer;
    unsigned int _pollBufferSize;
    unsigned int _pollBufferWriteIndex;
    NSArray *_availableTriggers;
    NSMutableArray *_requestedTriggers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)setEnabled:(char)a0;
- (id).cxx_construct;
- (char)isEnabled;
- (id)availableCounters;
- (id)availableTriggers;
- (unsigned int)drainRingBufferAtIndex:(unsigned int)a0 dataSize:(unsigned int)a1;
- (id)initWithSourceGroup:(id)a0 name:(id)a1;
- (char)pollCountersAtBufferIndex:(unsigned int)a0 withBlock:(id /* block */)a1;
- (char)postProcessRawDataWithRingBufferSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 sourceWrite:(unsigned long long)a3 output:(char *)a4 outputSize:(unsigned long long)a5 outputRead:(unsigned long long)a6 outputWrite:(unsigned long long *)a7 isLast:(char)a8;
- (char)postProcessRawDataWithSource:(char *)a0 sourceSize:(unsigned long long)a1 sourceRead:(unsigned long long *)a2 output:(char *)a3 outputSize:(unsigned long long)a4 outputWritten:(unsigned long long *)a5 isLast:(char)a6;
- (char)requestCounters:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (char)requestTriggers:(id)a0 firstErrorIndex:(unsigned long long *)a1;
- (void)resetRawDataPostProcessor;
- (char)ringBufferInfoAtIndex:(unsigned int)a0 base:(char **)a1 size:(unsigned int *)a2 dataOffset:(unsigned int *)a3 dataSize:(unsigned int *)a4;
- (unsigned int)ringBufferNum;
- (id)selectedCounters;
- (id)selectedTriggers;
- (void)processRawData:(char *)a0 output:(char *)a1 count:(unsigned long long)a2;
- (void)processRawVolatileData:(char *)a0 output:(char *)a1 count:(unsigned long long)a2;
- (void)setMetricsInfo:(id)a0 metricNames:(id)a1 mdapi:(struct IGMDAPIMetal { void /* function */ **x0; unsigned int x1; struct MDAPIGfxCapsRec { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; } x2; struct IGTelemetryGPU *x3; struct _WA_TABLE *x4; struct MDAPIConfigRegs *x5; struct MDAPIConfigRegs *x6; void *x7; char *x8[64]; char *x9[64]; struct IGTelemetryMetal *x10; } *)a2;

@end
