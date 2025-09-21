@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCVideoRelay : NSObject {
    NSMutableArray *_videoCaptureSinks;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)deregisterForVideoFrames:(id)a0;
- (char)enqueueFrame:(struct __CVBuffer { } *)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraStatusBits:(unsigned char)a2;
- (char)registerForVideoFrames:(id)a0;

@end
