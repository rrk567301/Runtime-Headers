@class TRIClient;

@interface RBXNUWrapper : NSObject <RBXNUWrapper> {
    struct __IOGPUDevice { } *_gpuDevice;
    unsigned long long _ballastOffsetMB;
    TRIClient *_trialClient;
}

+ (void)setGPURoleWithKernel:(unsigned char)a0 forPid:(int)a1;
+ (id)sharedWrapper;

- (void)setGPURoleWithGPUDevice:(unsigned char)a0 forPid:(int)a1;
- (void)setGPURole:(unsigned char)a0 forPid:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (long long)_setBallastOffset:(unsigned long long)a0;
- (unsigned long long)ballastOffsetMB;
- (long long)setBallastDrained:(BOOL)a0;

@end
