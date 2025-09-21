@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedDepthDataInternal *_internal;
}

@property (readonly) AVDepthData *depthData;
@property (readonly) char depthDataWasDropped;
@property (readonly) long long droppedReason;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initWithDepthData:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 depthDataWasDropped:(char)a2 droppedReason:(long long)a3;

@end
