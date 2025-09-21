@class NSError, NSString, ISAsset, AVPlayerItem, AVAssetImageGenerator, ISPlayerContent, NSObject, AVVideoComposition, NSNumber;
@protocol OS_dispatch_queue;

@interface ISPlayerItem : ISObservable {
    void *_ivarQueueIdentifier;
    void *_workQueueIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _ivarQueue_loadingTarget;
    AVVideoComposition *_ivarQueue_videoComposition;
    long long _ivarQueue_videoPlayerItemRequestID;
    char _ivarQueue_aggressivelyCacheVideoFrames;
    char _ivarQueue_reversesMoreVideoFramesInMemory;
    char _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    char _ivarQueue_contentSupportsVitality;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemPhotoTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    long long _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    struct { char videoPlayerItem; char status; char content; char minimumClientVersion; char playbackStyleIdentifier; char contentSupportsVitality; } _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    char _workQueue_isGeneratingOffsetImage;
}

@property (class, readonly, nonatomic) long long currentClientVersion;

@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) char _loadingCancelled;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
@property (retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
@property (retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
@property (nonatomic) char contentSupportsVitality;
@property (nonatomic) char reversesMoreVideoFramesInMemory;
@property (nonatomic) char aggressivelyCacheVideoFrames;
@property (nonatomic) char decodesAllFramesDuringOrdinaryPlayback;
@property (readonly, nonatomic) ISAsset *asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) NSNumber *contentAspectRatio;
@property (nonatomic) long long loadingTarget;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

+ (id)playerItemWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)playerItemWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentAspectRatio:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelLoading;
- (char)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (char)_isContentSupportsVitalityValid;
- (char)_isPlaybackStyleIdentifierValid;
- (void)_invalidateMinimumClientVersion;
- (void)_assertOnIvarQueue;
- (void)_assertOnWorkQueue;
- (char)_blendsVideoFramesForVideoPlayerItem:(id)a0;
- (void)_cancelLoading;
- (void)_dimFlashingLightsDidChangeValue:(id)a0;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(char)a0 playerItem:(id)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id)a3;
- (void)_invalidateContentSupportsVitality;
- (void)_invalidatePlaybackStyleIdentifier;
- (void)_invalidatePlayerContent;
- (void)_invalidateStatus;
- (void)_invalidateVideoPlayerItem;
- (char)_isMinimumClientVersionValid;
- (char)_isOnIvarQueue;
- (char)_isOnWorkQueue;
- (char)_isPlayerContentValid;
- (char)_isStatusVaild;
- (char)_isVideoPlayerItemValid;
- (void)_performIvarRead:(id /* block */)a0;
- (void)_performIvarWrite:(id /* block */)a0;
- (void)_performWork:(id /* block */)a0;
- (void)_performWork:(id /* block */)a0 sync:(char)a1;
- (void)_reloadAllContent;
- (void)_setVideoPlayerItem:(id)a0 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_updateContentSupportsVitalityIfNeeded;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)_updateVideoPlayerItemIfNeeded;
- (id)_videoPlayerItem;
- (void)didPerformChanges;
- (void)discardContentBelowLoadingTarget;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentAspectRatio:(id)a2;
- (id)mutableChangeObject;
- (void)resetAVObjects;

@end
