@class NSString, NSArray, AVAssetWriterHelper, NSURL, NSError, AVAssetWriterInternal;
@protocol AVAssetWriterDataWritingDelegate;

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {
    AVAssetWriterInternal *_internal;
}

@property (readonly, retain, getter=_helper) AVAssetWriterHelper *helper;
@property (readonly, weak, nonatomic) id<AVAssetWriterDataWritingDelegate> dataWritingDelegate;
@property (readonly, copy, nonatomic) NSURL *outputURL;
@property (readonly, copy, nonatomic) NSString *outputFileType;
@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_errorForOSStatus:(int)a0;
+ (id)assetWriterWithURL:(id)a0 fileType:(id)a1 error:(id *)a2;
+ (id)assetWriterWithDataWritingDelegate:(id)a0 fileType:(id)a1;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)finishWriting;
- (void)flush;
- (id)initWithContentType:(id)a0;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (float)preferredRate;
- (float)preferredVolume;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (void)setPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setPreferredVolume:(float)a0;
- (void)setDataWritingDelegate:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setOverallDurationHint:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)movieTimeScale;
- (void)setMovieTimeScale:(int)a0;
- (void)setPreferredRate:(float)a0;
- (id)inputGroups;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })preferredOutputSegmentInterval;
- (void)setPreferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })initialSegmentStartTime;
- (void)setInitialSegmentStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)outputFileTypeProfile;
- (void)setOutputFileTypeProfile:(id)a0;
- (long long)initialMovieFragmentSequenceNumber;
- (void)setInitialMovieFragmentSequenceNumber:(long long)a0;
- (BOOL)producesCombinableFragments;
- (void)setProducesCombinableFragments:(BOOL)a0;
- (id)finishWritingDelegate;
- (id)initWithURL:(id)a0 fileType:(id)a1 error:(id *)a2;
- (id)initWithDataWritingDelegate:(id)a0 fileType:(id)a1;
- (BOOL)_initInternalObject;
- (BOOL)_setHelper:(id)a0 ifCurrentHelper:(id)a1 withBlock:(id /* block */)a2;
- (BOOL)canApplyOutputSettings:(id)a0 forMediaType:(id)a1;
- (BOOL)canAddInput:(id)a0;
- (void)addInput:(id)a0;
- (BOOL)canAddInputGroup:(id)a0;
- (void)addInputGroup:(id)a0;
- (BOOL)startWriting;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)cancelWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (void)flushSegment;
- (id)initWithFileType:(id)a0 error:(id *)a1;
- (BOOL)_setHelper:(id)a0 ifCurrentHelper:(id)a1;
- (BOOL)_supportsSampleReferencesReturningError:(id *)a0;
- (void)setWritesSinglePassUsingPredeterminedFileSize:(long long)a0 mediaDataSize:(long long)a1;
- (void)setFinishWritingDelegate:(id)a0;
- (void)_transitionToFailedStatusWithError:(id)a0;

@end
