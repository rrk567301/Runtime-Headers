@class TRIClient;

@interface RBXNUWrapper : NSObject <RBXNUWrapper> {
    struct __IOGPUDevice { } *_gpuDevice;
    unsigned long long _ballastOffsetMB;
    TRIClient *_trialClient;
}

+ (id)sharedWrapper;
+ (void)setGPURoleWithKernel:(unsigned char)a0 forPid:(int)a1;

- (long long)_setBallastOffset:(unsigned long long)a0;
- (id)init;
- (void)setGPURole:(unsigned char)a0 forPid:(int)a1;
- (long long)setBallastDrained:(BOOL)a0;
- (unsigned long long)ballastOffsetMB;
- (void)setGPURoleWithGPUDevice:(unsigned char)a0 forPid:(int)a1;
- (void).cxx_destruct;

@end
