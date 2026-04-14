@class NSMutableDictionary;

@interface VUIMacOSPlaybackManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *seekCallbacks;
@property (readonly, nonatomic) double elapsedTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isMuted) BOOL muted;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)_registerNotifications;
- (id)currentDate;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })seekableTimeRange;
- (void)_playbackEngineWillStartPlayback:(id)a0;
- (void)_seekableTimeRangesChanged:(id)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withTolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completion:(id /* block */)a2;
- (void)setClipsMode:(BOOL)a0;
- (void)setSmartRoutingEligible:(BOOL)a0;

@end
