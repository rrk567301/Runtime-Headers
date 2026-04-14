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
    BOOL _ivarQueue_aggressivelyCacheVideoFrames;
    BOOL _ivarQueue_reversesMoreVideoFramesInMemory;
    BOOL _ivarQueue_decodesAllFramesDuringOrdinaryPlayback;
    BOOL _ivarQueue_contentSupportsVitality;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemPhotoTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ivarQueue_playerItemDuration;
    ISPlayerContent *_ivarQueue_playerContent;
    long long _ivarQueue_status;
    AVPlayerItem *_ivarQueue_videoPlayerItem;
    NSNumber *_ivarQueue_variationIdentifier;
    NSString *_ivarQueue_minimumClientVersion;
    NSError *_ivarQueue_error;
    struct { BOOL videoPlayerItem; BOOL status; BOOL content; BOOL minimumClientVersion; BOOL playbackStyleIdentifier; BOOL contentSupportsVitality; } _ivarQueue_isValid;
    AVAssetImageGenerator *_workQueue_imageGenerator;
    BOOL _workQueue_isGeneratingOffsetImage;
}

@property (class, readonly, nonatomic) long long currentClientVersion;

@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic, setter=_setPlayerContent:) ISPlayerContent *playerContent;
@property (nonatomic, getter=_isLoadingCancelled, setter=_setLoadingCancelled:) BOOL _loadingCancelled;
@property (nonatomic, setter=_setVideoPlayerItemRequestID:) long long _videoPlayerItemRequestID;
@property (retain, nonatomic, setter=_setVariationIdentifier:) NSNumber *_variationIdentifier;
@property (retain, nonatomic, setter=_setMinimumClientVersion:) NSString *_minimumClientVersion;
@property (nonatomic) BOOL contentSupportsVitality;
@property (nonatomic) BOOL reversesMoreVideoFramesInMemory;
@property (nonatomic) BOOL aggressivelyCacheVideoFrames;
@property (nonatomic) BOOL decodesAllFramesDuringOrdinaryPlayback;
@property (readonly, nonatomic) ISAsset *asset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long loadingTarget;
@property (copy, nonatomic) AVVideoComposition *videoComposition;

+ (id)playerItemWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_needsUpdate;
- (void)cancelLoading;
- (void)_updateIfNeeded;
- (void)performChanges:(id /* block */)a0;
- (void)resetAVObjects;
- (void)_invalidateStatus;
- (void)didPerformChanges;
- (void)_updateStatusIfNeeded;
- (id)mutableChangeObject;
- (void)discardContentBelowLoadingTarget;
- (id)_videoPlayerItem;
- (id)initWithAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)_performWork:(id /* block */)a0 sync:(BOOL)a1;
- (void)_performIvarRead:(id /* block */)a0;
- (void)_performIvarWrite:(id /* block */)a0;
- (void)_cancelLoading;
- (void)_invalidateVideoPlayerItem;
- (void)_setVideoPlayerItem:(id)a0 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_reloadAllContent;
- (void)_performWork:(id /* block */)a0;
- (void)_updateMinimumClientVersionIfNeeded;
- (void)_updatePlaybackStyleIdentifierIfNeeded;
- (void)_updateContentSupportsVitalityIfNeeded;
- (void)_updateVideoPlayerItemIfNeeded;
- (void)_updatePlayerContentIfNeeded;
- (BOOL)_isMinimumClientVersionValid;
- (BOOL)_isPlaybackStyleIdentifierValid;
- (void)_invalidatePlayerContent;
- (BOOL)_isContentSupportsVitalityValid;
- (BOOL)_isVideoPlayerItemValid;
- (void)_handleVideoPlayerItemLoadResultWithSuccess:(BOOL)a0 playerItem:(id)a1 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id)a3;
- (BOOL)_isPlayerContentValid;
- (BOOL)_isStatusVaild;
- (BOOL)_isOnWorkQueue;
- (BOOL)_isOnIvarQueue;
- (void)_invalidateMinimumClientVersion;
- (void)_invalidatePlaybackStyleIdentifier;
- (void)_invalidateContentSupportsVitality;
- (void)_assertOnWorkQueue;
- (void)_assertOnIvarQueue;

@end
