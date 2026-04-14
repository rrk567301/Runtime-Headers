@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
}

- (id)currentPassDescription;
- (void)markCurrentPassAsFinished;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (BOOL)canPerformMultiplePasses;
- (void)stopRequestingMediaData;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithConfigurationState:(id)a0;
- (void)markAsFinished;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)dealloc;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)status;
- (id)initWithWritingHelper:(id)a0;

@end
