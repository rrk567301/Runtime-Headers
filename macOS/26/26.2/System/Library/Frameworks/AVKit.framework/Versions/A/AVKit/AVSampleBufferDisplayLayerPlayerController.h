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

+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingTiming;

- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (BOOL)hasLiveStreamingContent;
- (double)contentDuration;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (double)contentDurationWithinEndTimes;
- (double)currentTimeWithinEndTimes;
- (id)timing;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)isPlaying;
- (BOOL)isPictureInPicturePossible;
- (id)maxTiming;
- (void)setPlaying:(BOOL)a0;
- (id)minTiming;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (double)rate;
- (void)_updateStatus;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (double)_effectiveRate;
- (void)_startObservation;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)_updatePlaybackStateTiming;
- (void)invalidatePlaybackState;

@end
