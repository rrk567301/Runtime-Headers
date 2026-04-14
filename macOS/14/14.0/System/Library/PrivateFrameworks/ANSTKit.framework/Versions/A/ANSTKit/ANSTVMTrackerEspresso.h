@class ANSTBaseNetworkEspresso;

@interface ANSTVMTrackerEspresso : NSObject {
    ANSTBaseNetworkEspresso *_memoryNetwork;
    ANSTBaseNetworkEspresso *_maskNetwork;
    ANSTBaseNetworkEspresso *_updateNetwork;
    struct __CVBuffer { } *_initialMask;
    struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *_outputMaskBuffer;
    struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *_probTensor;
    struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *_keyTensor;
    struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *_valueTensor;
    struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *_hiddenStateTensor;
    void *_keyTensorSwapSpace;
    unsigned long long _keyTensorSwapSpaceSize;
    void *_valueTensorSwapSpace;
    unsigned long long _valueTensorSwapSpaceSize;
    long long _engineType;
    unsigned int _qualityOfService;
    long long _networkResolution;
    BOOL _firstFrame;
}

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)getOutputMaskBuffer;
- (BOOL)runUpdateModel:(struct __CVBuffer { } *)a0;
- (id)_expectedMaskNetworkFileName;
- (id)_expectedMemoryNetworkFileName;
- (id)_expectedUpdateNetworkFileName;
- (id)_maskNetworkName;
- (id)_memoryNetworkName;
- (BOOL)_setInitialMaskWithValue:(float)a0;
- (id)_updateNetworkName;
- (BOOL)initNetwork;
- (id)initWithNetworkEnginType:(long long)a0 qualityOfService:(unsigned int)a1 networkResolution:(long long)a2;
- (BOOL)runInferenceModel:(struct __CVBuffer { } *)a0;
- (BOOL)runInitializerModel:(struct __CVBuffer { } *)a0;

@end
