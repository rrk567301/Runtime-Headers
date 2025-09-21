@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface OKAudioDucker : NSObject {
    float _currentVolume;
    float _fadeToVolume;
    float _fadeFromVolume;
    float _duckLevel;
    double _startFadeTime;
    long long _duckState;
    double _fadeDuration;
    double _duckDuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _setVolumeBlock;
}

@property (nonatomic) float volume;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)_handleTimerEvent;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)beginFadingWithDuration:(double)a0;
- (void)endDucking;
- (void)endFading;
- (void)endFading:(char)a0;
- (void)setSetVolumeBlock:(id /* block */)a0;

@end
