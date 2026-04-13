@interface AVCaptureStillImageTransform : NSObject {
    struct opaqueCMSampleBuffer { } *_sourceBuffer;
    struct opaqueCMSampleBuffer { } *_resultBuffer;
}

@property int status;

+ (id)transform;

- (void)dealloc;
- (void)setSourceBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)sourceBuffer;
- (void)setResultBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (struct opaqueCMSampleBuffer { } *)resultBuffer;

@end
