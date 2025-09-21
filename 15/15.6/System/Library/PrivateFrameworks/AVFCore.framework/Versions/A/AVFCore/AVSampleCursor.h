@class AVSampleCursorInternal;

@interface AVSampleCursor : NSObject <NSCopying> {
    AVSampleCursorInternal *_sampleCursor;
}

+ (void)initialize;
+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })presentationTimeStamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })decodeTimeStamp;
- (long long)stepInPresentationOrderByCount:(long long)a0;
- (struct OpaqueFigSampleCursor { } *)_figSampleCursor;
- (char)canProvideSampleBuffers;
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)a0;
- (struct opaqueCMFormatDescription { } *)copyCurrentSampleFormatDescription;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForCurrentSampleReturningError:(id *)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFromCurrentSampleToEndCursor:(id)a0 error:(id *)a1;
- (struct { long long x0; char x1; char x2; char x3; })currentChunkInfo;
- (struct { long long x0; long long x1; })currentChunkStorageRange;
- (id)currentChunkStorageURL;
- (struct { char x0; long long x1; })currentSampleAudioDependencyInfo;
- (id)currentSampleDependencyAttachments;
- (struct { char x0; char x1; char x2; char x3; char x4; char x5; })currentSampleDependencyInfo;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentSampleDuration;
- (long long)currentSampleIndexInChunk;
- (struct { long long x0; long long x1; })currentSampleStorageRange;
- (struct { char x0; char x1; char x2; })currentSampleSyncInfo;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;
- (long long)samplesRequiredForDecoderRefresh;
- (char)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)a0;
- (char)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)a0;
- (id)seamIdentifier;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(char *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(char *)a1;
- (long long)stepInDecodeOrderByCount:(long long)a0;

@end
