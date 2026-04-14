@class AVSampleCursorInternal;

@interface AVSampleCursor : NSObject <NSCopying> {
    AVSampleCursorInternal *_sampleCursor;
}

+ (void)initialize;
+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })presentationTimeStamp;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;
- (struct OpaqueFigSampleCursor { } *)_figSampleCursor;
- (long long)stepInDecodeOrderByCount:(long long)a0;
- (long long)stepInPresentationOrderByCount:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(BOOL *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(BOOL *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })decodeTimeStamp;
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)a0;
- (BOOL)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)a0;
- (BOOL)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)a0;
- (BOOL)canProvideSampleBuffers;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForCurrentSampleReturningError:(id *)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFromCurrentSampleToEndCursor:(id)a0 error:(id *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentSampleDuration;
- (const struct opaqueCMFormatDescription { } *)copyCurrentSampleFormatDescription;
- (struct { BOOL x0; BOOL x1; BOOL x2; })currentSampleSyncInfo;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })currentSampleDependencyInfo;
- (struct { BOOL x0; long long x1; })currentSampleAudioDependencyInfo;
- (id)currentSampleDependencyAttachments;
- (id)currentChunkStorageURL;
- (struct { long long x0; long long x1; })currentChunkStorageRange;
- (struct { long long x0; BOOL x1; BOOL x2; BOOL x3; })currentChunkInfo;
- (long long)currentSampleIndexInChunk;
- (struct { long long x0; long long x1; })currentSampleStorageRange;
- (long long)samplesRequiredForDecoderRefresh;
- (id)seamIdentifier;

@end
