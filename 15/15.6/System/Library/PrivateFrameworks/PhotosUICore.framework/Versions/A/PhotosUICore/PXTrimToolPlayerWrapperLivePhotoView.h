@class ISVideoPlayerNSView, NSString, ISWrappedAVPlayer, UXView;
@protocol PXTrimToolPlayerObserver, PXLivePhotoView;

@interface PXTrimToolPlayerWrapperLivePhotoView : NSObject <ISChangeObserver, PXTrimToolPlayerWrapper> {
    struct { char respondsToPlayerStatusChangedForPlayerWrapper; char respondsToTimeChanged; } _delegateFlags;
}

@property (retain, nonatomic) ISWrappedAVPlayer *wrappedAVPlayer;
@property (readonly, nonatomic) id<PXLivePhotoView> livePhotoView;
@property (nonatomic) char needsPlayerUpdate;
@property (retain, nonatomic) ISVideoPlayerNSView *_videoPlayerView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } periodicTimeObservationInterval;
@property (retain, nonatomic) id periodicTimeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXTrimToolPlayerObserver> playerObserver;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } trimRange;
@property (readonly, nonatomic) UXView *loupePlayerView;
@property (readonly, nonatomic, getter=isReadyToPlay) char readyToPlay;
@property (readonly, nonatomic, getter=isPlaying) char playing;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;

- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)videoPlayerView;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)invalidateComposition;
- (void)_loadWrappedAVPlayerIfNecessary;
- (void)_addPeriodicTimeObserver;
- (void)_createLoupePlayerView;
- (void)_timeObserverTimeChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_videoPlayerViewIfLoaded;
- (void)applyTrimTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)finishSeeking;
- (id)initWithLivePhotoView:(id)a0;
- (void)requestAssetWithCompletion:(id /* block */)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(char)a1 exact:(char)a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(char)a1 exact:(char)a2 forceSeek:(char)a3;
- (void)startPeriodicTimeObserver;
- (void)stepByCount:(long long)a0 playheadTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stopPeriodicTimeObserver;

@end
