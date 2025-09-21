@class BWVideoOrientationTimeMachine, BWLimitedGMErrorLogger, BWIrisStillImageMovieMetadataCache, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BWIrisMovieGenerator : NSObject {
    char _sourceIsFrontFacingCamera;
    char _sourceIsExternalCamera;
    char _clientExpectsCameraMountedInLandscapeOrientation;
    char _sampleReferenceMoviesEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _masterMovieDuration;
    struct OpaqueCMByteStream { } *_byteStream;
    struct OpaqueFigFormatReader { } *_masterMovieReader;
    char _masterMovieParsingComplete;
    long long _masterMovieAudioExtractionID;
    struct OpaqueFigSimpleMutex { } *_movieInfoAndCallbacksMutex;
    NSMutableArray *_movieInfoAndCallbacks;
    int _numberOfPendingReferenceMovies;
    NSObject<OS_dispatch_queue> *_movieGenerationQueue;
    char _suspended;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

@property char suspended;
@property (readonly) int numberOfPendingReferenceMovies;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } actualMovieStartTime;
@property char vitalInputStreamHasBeenForcedOff;
@property int streamForcedOffErrorCode;

+ (void)initialize;

- (void)dealloc;
- (char)flush;
- (char)flushAsync;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { } *)a0 forFrontFacingCamera:(char)a1 forExternalCamera:(char)a2 clientExpectsCameraMountedInLandscapeOrientation:(char)a3 sampleReferenceMoviesEnabled:(char)a4 movieGenerationQueue:(id)a5 irisStillImageMovieMetadataCache:(id)a6 videoOrientationTimeMachine:(id)a7;
- (void)parseAdditionalFragments;
- (void)updateOverCaptureQualityScoresForMoviesEndingBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromMetadataRingBuffer:(id)a1;
- (void)writeMovieWithInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
