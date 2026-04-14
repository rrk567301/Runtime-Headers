@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (void)stopRequestingMediaData;
- (BOOL)isReadyForMoreMediaData;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (void)markCurrentPassAsFinished;
- (long long)status;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (BOOL)canPerformMultiplePasses;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithConfigurationState:(id)a0;
- (id)currentPassDescription;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (void)markAsFinished;
- (void)dealloc;
- (id)initWithWritingHelper:(id)a0;
- (BOOL)shouldRespondToInitialPassDescription;
- (void)startPassAnalysis;

@end
