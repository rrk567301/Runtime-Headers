@class NSString;

@interface _PXVideoSessionPresentationState : NSObject <PXMutableVideoSession>

@property (nonatomic) void *presenter;
@property (readonly, copy, nonatomic) NSString *audioSessionCategory;
@property (readonly, nonatomic) unsigned long long audioSessionCategoryOptions;
@property (readonly, nonatomic) NSString *audioSessionMode;
@property (readonly, nonatomic) unsigned long long audioSessionRouteSharingPolicy;
@property (readonly, nonatomic) float volume;
@property (readonly, nonatomic) char shouldFadeVolumeChange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playbackTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackStartTime;
@property (nonatomic) char seekToBeginningAtEnd;
@property (nonatomic, getter=isLoopingEnabled) char loopingEnabled;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic) char preventsSleepDuringVideoPlayback;
@property (nonatomic) char allowsExternalPlayback;
@property (nonatomic) char shouldDisableAutomaticPixelBufferUpdates;
@property (nonatomic) double desiredPlaybackRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setAudioSessionCategory:(id)a0 mode:(id)a1 routeSharingPolicy:(unsigned long long)a2 options:(unsigned long long)a3;
- (void)setVolume:(float)a0 withFade:(char)a1;

@end
