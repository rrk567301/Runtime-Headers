@interface UVCFrameProcessorDecode : UVCFrameProcessorBase {
    id _decompressionSession;
    id _videoFormatDescriptor;
    unsigned long long _noOfFramesDecodeSend;
    unsigned long long _noOfFramesDecodeCompleted;
    unsigned long long _decodeLatency;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)serialize;
- (id)decompressionSession;
- (void)setDecompressionSession:(id)a0;
- (void)invalidateCurrentDecompressionSession;
- (id)initWithAttributes:(id)a0 destination:(id)a1 queue:(id)a2;
- (void)sendSampleBufferToDestination:(id)a0;
- (unsigned long long)noOfFramesDecodeCompleted;
- (void)setNoOfFramesDecodeCompleted:(unsigned long long)a0;
- (void)sendDecodedFrameToRender:(id)a0 presentationDuration:(id)a1 imageBuffer:(struct __CVBuffer { } *)a2;
- (unsigned long long)decodeLatency;
- (void)setDecodeLatency:(unsigned long long)a0;
- (unsigned long long)noOfFramesDecodeSend;
- (void)setNoOfFramesDecodeSend:(unsigned long long)a0;
- (void)logDecodeLatency:(unsigned long long)a0;
- (void)handleDecodeFrame:(id)a0 presentationDuration:(id)a1 imageBuffer:(struct __CVBuffer { } *)a2;
- (struct opaqueCMSampleBuffer { } *)createSampleBuffer:(id)a0 error:(id *)a1;
- (id)videoFormatDescriptor;
- (void)setVideoFormatDescriptor:(id)a0;
- (BOOL)decodeFrame:(id)a0 outError:(id *)a1;
- (struct OpaqueVTDecompressionSession { } *)createDecompressionSession:(struct opaqueCMFormatDescription { } *)a0 error:(id *)a1;

@end
