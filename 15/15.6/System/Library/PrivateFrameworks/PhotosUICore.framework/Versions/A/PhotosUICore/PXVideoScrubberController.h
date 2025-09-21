@class PXScrubberSeekRequest, AVPlayerItem;
@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;

@interface PXVideoScrubberController : PXObservable {
    id _playerObserver;
    char _needsUpdate;
    char _avPlayerCurrentTimeNeedsUpdate;
    char _avPlayerDurationNeedsUpdate;
    struct { char respondsToDidUpdate; char respondsToLengthForDuration; char respondsToDesiredSeekTime; } _videoScrubberDelegateFlags;
    struct { char respondsToWillBeginSeeking; char respondsToDidEndSeeking; } _targetFlags;
}

@property (nonatomic, setter=_setPlayheadTime:) double _playheadTime;
@property (retain, nonatomic, setter=_setPendingSeekRequest:) PXScrubberSeekRequest *_pendingSeekRequest;
@property (retain, nonatomic, setter=_setActiveSeekRequest:) PXScrubberSeekRequest *_activeSeekRequest;
@property (nonatomic, setter=_setAvPlayerCurrentTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } _avPlayerCurrentTime;
@property (nonatomic, setter=_setAvPlayerDuration:) struct { long long value; int timescale; unsigned int flags; long long epoch; } _avPlayerDuration;
@property (weak, nonatomic) id<PXVideoScrubberControllerDelegate> delegate;
@property (readonly, nonatomic) id<PXVideoScrubberControllerTarget> target;
@property (readonly, nonatomic) double estimatedDuration;
@property (readonly, nonatomic) double length;
@property (nonatomic) double playheadProgress;
@property (readonly, nonatomic) AVPlayerItem *currentPlayerItem;
@property (readonly, nonatomic) float playRate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_removeObservers;
- (void)_addObservers;
- (double)_duration;
- (void)endSeeking;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)_updateAvPlayerDurationIfNeeded;
- (void)_handleTimeoutCallbackForSeekRequest:(id)a0;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_invalidateAvPlayerDuration;
- (double)_lengthForDuration:(double)a0;
- (void)_playerDidChange:(id)a0;
- (void)_playerItemDidChange;
- (void)_playerItemDurationDidChange;
- (void)_playerStatusDidChange;
- (double)_progressForTime:(double)a0;
- (void)_seekRequest:(id)a0 didFinish:(char)a1;
- (void)_seekToTime:(double)a0;
- (void)_setPlayheadProgress:(double)a0 andSeekVideoPlayer:(char)a1;
- (double)_timeForProgress:(double)a0;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_updateSeeking;
- (void)beginSeeking;
- (id)initWithTarget:(id)a0 estimatedDuration:(double)a1;

@end
