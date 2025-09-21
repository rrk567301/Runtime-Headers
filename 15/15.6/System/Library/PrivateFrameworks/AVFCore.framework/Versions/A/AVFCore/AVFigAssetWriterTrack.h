@class NSString, AVMediaFileType, AVWeakReference, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigAssetWriterTrack : NSObject {
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;
    char _aboveHighWaterLevel;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) struct OpaqueFigAssetWriter { } *figAssetWriter;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) AVMediaFileType *mediaFileType;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (readonly, nonatomic) char encoderSupportsMultiPass;
@property (readonly, getter=isAboveHighWaterLevel) char aboveHighWaterLevel;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleBufferCoalescingInterval;

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaType:(id)a1 mediaFileType:(id)a2 formatSpecification:(id)a3 sourcePixelBufferAttributes:(id)a4 multiPass:(char)a5 attachedAdaptor:(id)a6 error:(id *)a7;

- (void)dealloc;
- (id)init;
- (void)setLanguageCode:(id)a0;
- (void)setLayer:(long long)a0;
- (void)setFigMetadata:(id)a0;
- (void)setProvisionalAlternateGroupID:(short)a0;
- (void)setTrackVolume:(float)a0;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)a0 sourcePixelBufferAttributes:(id)a1 multiPass:(char)a2 error:(id *)a3;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)a0;
- (void)_refreshAboveHighWaterLevel;
- (char)addPixelBuffer:(struct __CVBuffer { } *)a0 atPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (char)addSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (char)addTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 atPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (char)beginPassReturningError:(id *)a0;
- (void)endPassWithCompletionHandler:(id /* block */)a0;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 mediaType:(id)a1 mediaFileType:(id)a2 formatSpecification:(id)a3 sourcePixelBufferAttributes:(id)a4 multiPass:(char)a5 error:(id *)a6;
- (char)markEndOfDataReturningError:(id *)a0;
- (void)prepareToEndSession;
- (void)setAlternateGroupID:(short)a0;
- (void)setExcludeFromAutoSelection:(char)a0;
- (void)setExtendedLanguageTag:(id)a0;
- (void)setFigDimensions:(id)a0;
- (void)setFigTrackMatrix:(id)a0;
- (void)setFormatDescriptions:(id)a0;
- (void)setMarksOutputTrackAsEnabled:(char)a0;
- (void)setMediaDataLocation:(id)a0;
- (void)setMediaTimeScale:(int)a0;
- (void)setPreferredChunkAlignment:(long long)a0;
- (void)setPreferredChunkDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPreferredChunkSize:(long long)a0;
- (void)setSampleReferenceBaseURL:(id)a0;

@end
