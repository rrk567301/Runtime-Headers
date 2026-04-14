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

+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingTiming;

- (BOOL)isPlaying;
- (id)timing;
- (double)currentTimeWithinEndTimes;
- (double)rate;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (id)init;
- (id)maxTiming;
- (double)contentDurationWithinEndTimes;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (id)minTiming;
- (double)contentDuration;
- (void)_updateStatus;
- (void).cxx_destruct;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)dealloc;
- (void)setPlaying:(BOOL)a0;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)isPictureInPicturePossible;
- (BOOL)hasLiveStreamingContent;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (double)_effectiveRate;
- (void)_startObservation;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)_updatePlaybackStateTiming;
- (void)invalidatePlaybackState;

@end
