@class NSString, AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError;
@protocol AVAssetWriterDelegate;

@interface AVAssetWriterHelper : NSObject

@property (readonly, nonatomic) AVAssetWriterConfigurationState *configurationState;
@property (retain) AVWeakReference *weakReferenceToAssetWriter;
@property (readonly, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) AVMediaFileType *mediaFileType;
@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (weak) id<AVAssetWriterDelegate> delegate;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } movieFragmentInterval;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialMovieFragmentInterval;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } overallDurationHint;
@property (nonatomic) char shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (nonatomic) int movieTimeScale;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) NSArray *inputGroups;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } preferredOutputSegmentInterval;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } initialSegmentStartTime;
@property (copy, nonatomic) NSString *outputFileTypeProfile;
@property (nonatomic) long long initialMovieFragmentSequenceNumber;
@property (nonatomic) char producesCombinableFragments;
@property (copy, nonatomic) NSArray *contentProtectionConfigurations;

- (void)dealloc;
- (id)init;
- (void)finishWriting;
- (void)flush;
- (char)_canApplyOutputSettings:(id)a0 forMediaType:(id)a1 sourceFormat:(struct opaqueCMFormatDescription { } *)a2 exceptionReason:(id *)a3;
- (char)_canApplyTrackReferences:(id)a0 exceptionReason:(id *)a1;
- (char)_transitionToClientInitiatedTerminalStatus:(long long)a0;
- (void)addInput:(id)a0;
- (void)addInputGroup:(id)a0;
- (char)canAddInput:(id)a0;
- (char)canAddInputGroup:(id)a0;
- (char)canApplyOutputSettings:(id)a0 forMediaType:(id)a1;
- (void)cancelWriting;
- (id)dataWritingDelegate;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)flushSegment;
- (id)initWithConfigurationState:(id)a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)startWriting;
- (void)transitionToFailedStatusWithError:(id)a0;

@end
