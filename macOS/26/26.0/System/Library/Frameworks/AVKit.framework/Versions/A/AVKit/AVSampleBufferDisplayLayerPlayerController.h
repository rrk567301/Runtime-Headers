@class AVPictureInPicturePlaybackState, AVPictureInPictureController, AVSampleBufferDisplayLayerPlaybackDelegateAdapter, AVValueTiming, AVObservationController;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController {
    AVValueTiming *_timing;
}

@property (copy, nonatomic) AVPictureInPicturePlaybackState *playbackState;
@property (retain, nonatomic) AVObservationController *sbdlObservationController;
@property (nonatomic, getter=isPictureInPictureAvailable) BOOL pictureInPictureAvailable;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } contentTimeRange;
@property (nonatomic) long long status;
@property (nonatomic) long long timeControlStatus;
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlaybackDelegateAdapter *playbackDelegateAdapter;
@property (nonatomic) BOOL oldPictureInPictureAvailableState;
@property (nonatomic) long long oldAVPlayControllerStatus;
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (weak, nonatomic) id<AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate;
@property (nonatomic) struct CGSize { double width; double height; } enqueuedBufferDimensions;

+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingTiming;

- (struct CGSize { double x0; double x1; })contentDimensions;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (BOOL)isPlaying;
- (BOOL)isPictureInPicturePossible;
- (double)rate;
- (id)maxTiming;
- (double)currentTimeWithinEndTimes;
- (void)setPlaying:(BOOL)a0;
- (BOOL)hasSeekableLiveStreamingContent;
- (id)minTiming;
- (double)contentDuration;
- (BOOL)hasLiveStreamingContent;
- (id)timing;
- (double)contentDurationWithinEndTimes;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (void)dealloc;
- (void)_updateStatus;
- (id)init;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (double)_effectiveRate;
- (void)_startObservation;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)_updatePlaybackStateTiming;
- (void)invalidatePlaybackState;

@end
