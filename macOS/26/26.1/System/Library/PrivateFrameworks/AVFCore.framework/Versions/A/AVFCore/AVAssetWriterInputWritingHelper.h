@class AVAssetWriterInputPassDescription, NSString, AVAssetWriterInputMediaDataRequester, AVKeyPathDependencyManager, NSObject, AVFigAssetWriterTrack;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate, AVWeakObservable, AVKeyPathDependencyHost> {
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    BOOL _observingSelf;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    AVKeyPathDependencyManager *_keyPathDependencyManager;
    NSObject<OS_dispatch_queue> *_mediaDataRequesterSerialQueue;
    NSObject<OS_dispatch_queue> *_readyForMoreMediaDataObserverSerialQueue;
}

@property (readonly, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack;
@property (retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markCurrentPassAsFinished;
- (struct __CVPixelBufferPool { } *)pixelBufferPool;
- (BOOL)canPerformMultiplePasses;
- (void)stopRequestingMediaData;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithConfigurationState:(id)a0;
- (void)markAsFinished;
- (long long)appendCaptionGroup:(id)a0 error:(id *)a1;
- (BOOL)mediaDataRequesterShouldRequestMediaData;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)a0;
- (void)_startObservingReadyForMoreMediaDataKeyPath;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)didStartInitialSession;
- (long long)appendCaption:(id)a0 error:(id *)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)beginPassIfAppropriate;
- (void)dealloc;
- (BOOL)prepareToFinishWritingReturningError:(id *)a0;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (void)prepareToEndSession;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)a0;
- (id)initWithConfigurationState:(id)a0 assetWriterTrack:(id)a1 error:(id *)a2;
- (void)_stopObservingReadyForMoreMediaDataKeyPath;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)status;
- (void)_nudgeMediaDataRequesterIfAppropriate:(id)a0;

@end
