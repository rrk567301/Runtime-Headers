@class NSMutableSet;

@interface ISLivePhotoPlaybackFilter : ISObservable

@property (nonatomic, setter=_setPerformingInputChanges:) BOOL isPerformingInputChanges;
@property (nonatomic, getter=isPlaybackDisabled, setter=_setPlaybackDisabled:) BOOL playbackDisabled;
@property (readonly, nonatomic) NSMutableSet *_playbackDisabledReasons;
@property (readonly, nonatomic) double hintProgress;
@property (readonly, nonatomic) long long state;
@property (nonatomic) BOOL playIsSticky;

- (void)setState:(long long)a0;
- (void)_setState:(long long)a0;
- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (id)mutableChangeObject;
- (void)setHintProgress:(double)a0;
- (void)setPlaybackDisabled:(BOOL)a0 forReason:(id)a1;

@end
