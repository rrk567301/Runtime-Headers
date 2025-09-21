@class VCVideoFrameBufferPool;

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool *_bufferPool;
}

@property (nonatomic) int effectsMode;
@property (nonatomic) int effectsType;
@property (nonatomic) char effectsApplied;
@property (nonatomic) char faceMeshTrackingEnabled;

- (void)dealloc;
- (id)init;
- (char)addFrame:(struct __CVBuffer { } *)a0 time:(long long)a1;
- (char)releaseFrameWithTime:(long long)a0;

@end
