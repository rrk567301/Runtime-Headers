@class VCVideoCapture;

@interface VCStreamInputVideo : VCStreamInput {
    VCVideoCapture *_videoCapture;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithStreamInputID:(id)a0 format:(struct opaqueCMFormatDescription { } *)a1 delegate:(id)a2 delegateQueue:(id)a3 remoteQueue:(id)a4;
- (unsigned int)addSink:(id)a0;
- (unsigned int)removeSink:(id)a0;

@end
