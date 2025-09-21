@class AVCaptionGrouper;

@interface AVFigAssetWriterCaptionTrack : AVFigAssetWriterTrack {
    AVCaptionGrouper *_captionGrouper;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _previousCaptionTimeRange;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextGroupStartTime;
}

- (void)dealloc;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)a0 sourcePixelBufferAttributes:(id)a1 multiPass:(char)a2 error:(id *)a3;
- (char)addCaption:(id)a0 error:(id *)a1;
- (char)addCaptionGroup:(id)a0 error:(id *)a1;
- (char)addCaptionGroupAsSampleBuffer:(id)a0 error:(id *)a1;
- (char)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (char)flushCaptionsUntilTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (char)flushCaptionsWithError:(id *)a0;
- (char)markEndOfDataReturningError:(id *)a0;
- (void)prepareToEndSession;

@end
