@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
}

- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (long long)status;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (id)initWithConfigurationState:(id)a0;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)markAsFinished;
- (void)stopRequestingMediaData;
- (id)currentPassDescription;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)canPerformMultiplePasses;
- (void)markCurrentPassAsFinished;
- (void)dealloc;
- (id)initWithWritingHelper:(id)a0;

@end
