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

+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingTiming;

- (double)currentTimeWithinEndTimes;
- (BOOL)hasLiveStreamingContent;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (double)contentDurationWithinEndTimes;
- (BOOL)isPictureInPicturePossible;
- (id)minTiming;
- (id)maxTiming;
- (double)rate;
- (double)contentDuration;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (void)setPlaying:(BOOL)a0;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (BOOL)hasSeekableLiveStreamingContent;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (BOOL)isPlaying;
- (id)timing;
- (void).cxx_destruct;
- (id)init;
- (void)_updateStatus;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (double)_effectiveRate;
- (void)_startObservation;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)_updatePlaybackStateTiming;
- (void)invalidatePlaybackState;

@end
