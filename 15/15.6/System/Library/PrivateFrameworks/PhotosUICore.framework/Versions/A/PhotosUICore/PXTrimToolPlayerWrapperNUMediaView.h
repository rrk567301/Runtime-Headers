@class NSMutableArray, _PXTrimToolPlayerWrapperAVPlayerView, NSArray, NSString, NUMediaView, AVPlayer;
@protocol PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource, PXTrimToolPlayerObserver, NUMediaPlayer;

@interface PXTrimToolPlayerWrapperNUMediaView : NSObject <PXTrimToolPlayerWrapper> {
    struct { char respondsToPlayerStatusChangedForPlayerWrapper; char respondsToTimeChanged; } _delegateFlags;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _trimRange;
}

@property (readonly, nonatomic) NUMediaView *mediaView;
@property (retain, nonatomic) id<NUMediaPlayer> mediaPlayer;
@property (readonly, nonatomic) AVPlayer *_currentAVPlayer;
@property (retain, nonatomic) NSMutableArray *mediaViewObservers;
@property (retain, nonatomic) id mediaViewTimeObserver;
@property (retain, nonatomic) _PXTrimToolPlayerWrapperAVPlayerView *loupePlayerView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) char didPlayBeforeSeek;
@property (nonatomic) char didLoopVideoBeforeSeek;
@property (copy, nonatomic) NSArray *pipelineFiltersBeforeSeek;
@property (weak, nonatomic) id<PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> playerItemSource;
@property (copy, nonatomic) NSArray *fullVideoPipelineFilters;
@property (nonatomic) char showsUntrimmed;
@property (weak, nonatomic) id<PXTrimToolPlayerObserver> playerObserver;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } trimRange;
@property (readonly, nonatomic, getter=isReadyToPlay) char readyToPlay;
@property (readonly, nonatomic, getter=isPlaying) char playing;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)invalidateComposition;
- (void)setPosterFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_handleMediaPlayerObserverMediaChanged;
- (void)_handleMediaPlayerObserverStatusChanged:(long long)a0;
- (void)_handleMediaPlayerObserverTimeChanged:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_registerDefaultMediaViewObserver;
- (void)_registerTimeMediaViewObserver;
- (void)_removeMediaPlayerObserver;
- (void)_removeTimeObserver;
- (void)_updateLoupePlayerView;
- (void)applyTrimTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)finishSeeking;
- (id)initWithNUMediaView:(id)a0;
- (void)requestAssetWithCompletion:(id /* block */)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(char)a1 exact:(char)a2;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 untrimmed:(char)a1 exact:(char)a2 forceSeek:(char)a3;
- (void)setShowsUntrimmed:(char)a0 completion:(id /* block */)a1;
- (void)startPeriodicTimeObserver;
- (void)stepByCount:(long long)a0 playheadTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)stopPeriodicTimeObserver;

@end
