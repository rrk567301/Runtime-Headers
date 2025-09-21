@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable

@property (nonatomic, setter=_setPerformingInputChanges:) char isPerformingInputChanges;
@property (nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) char playbackDisabled;
@property (readonly, nonatomic) NSMutableSet *_playbackDisabledReasons;
@property (readonly, nonatomic) double hintProgress;
@property (readonly, nonatomic) long long state;
@property (nonatomic) char playIsSticky;

- (id)init;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)reset;
- (void)_setState:(long long)a0;
- (id)mutableChangeObject;
- (void)setHintProgress:(double)a0;
- (void)setPlaybackDisabled:(char)a0 forReason:(id)a1;

@end
