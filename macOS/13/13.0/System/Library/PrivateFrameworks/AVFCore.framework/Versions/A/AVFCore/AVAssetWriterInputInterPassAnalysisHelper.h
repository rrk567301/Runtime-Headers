@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}

- (void)dealloc;
- (long long)status;
- (id)initWithConfigurationState:(id)a0;
- (BOOL)isReadyForMoreMediaData;
- (BOOL)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)stopRequestingMediaData;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (id)initWithWritingHelper:(id)a0;
- (void)startPassAnalysis;
- (BOOL)shouldRespondToInitialPassDescription;

@end
