@class AUAudioUnitBusArray;

@interface RERotatingShapedWhiteNoise : AUAudioUnit {
    AUAudioUnitBusArray *_outputBusArray;
    struct shared_ptr<RERotatingShapedWhiteNoiseState> { struct RERotatingShapedWhiteNoiseState *__ptr_; struct __shared_weak_count *__cntrl_; } _state;
}

@property unsigned int samplePeriod;

+ (void)instantiate:(id /* block */)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)a0;
- (id)outputBusses;
- (id /* block */)internalRenderBlock;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 error:(id *)a2;
- (void)deallocateRenderResources;

@end
