@class IGGPURawCounterSource, MTLIGAccelDevice;
@protocol MTLCommandQueue;

@interface IGGPURawCounterSourceGroup : _GPURawCounterSourceGroup {
    unsigned long long _sampleMarker;
    MTLIGAccelDevice *pMTLAccelDevice;
    struct IGMDAPIMetal { void /* function */ **x0; unsigned int x1; struct MDAPIGfxCapsRec { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; } x2; struct IGTelemetryGPU *x3; struct _WA_TABLE *x4; struct MDAPIConfigRegs *x5; struct MDAPIConfigRegs *x6; void *x7; char *x8[64]; char *x9[64]; struct IGTelemetryMetal *x10; } *pMTLIGInterfaceMDAPI;
    char *pMTLDeviceName;
    id<MTLCommandQueue> pMTLCommandQueue;
    char _oaEnabled;
    unsigned int _ringBufferCount;
    char *_pOABufferCpuAddress_sourceGroup;
    unsigned int _ioBufferSize;
    IGGPURawCounterSource *enabledCounterSource;
    unsigned long long *_pPollBufferProcessedResults;
    unsigned int _pollBufferSize;
    unsigned long long _euCoreCount;
    unsigned long long _samplingPeriodInMicroseconds;
}

- (void)dealloc;
- (id)init;
- (id)options;
- (id)initWithAcceleratorPort:(unsigned int)a0;
- (unsigned long long)sampleMarker;
- (char)startSampling;
- (char)stopSampling;
- (id)getEnabledCounterSource;
- (unsigned int)getOaBufferCount;
- (char)initOa:(unsigned int *)a0 oaBufferAddress:(char **)a1;
- (char)oaEnabled;
- (unsigned long long *)pollBuffer:(unsigned int *)a0;
- (void)setEnabledCounterSource:(id)a0;
- (int)setOaTimerState:(char)a0;

@end
