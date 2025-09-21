@interface PXVideoMuteController : PXObservable

@property (class, readonly, nonatomic) PXVideoMuteController *sharedController;

@property (nonatomic) long long muteState;
@property (nonatomic, setter=setAutoplayEnabled:) char isAutoplayEnabled;
@property (readonly, nonatomic) char isMuted;

- (id)debugDescription;
- (id)init;
- (void)setIsMuted:(char)a0;
- (void)_updateIsMuted;
- (void)applicationDidMoveToBackground;
- (void)autoplaySettingDidChange;
- (id)initWithAutoplaySetting:(char)a0;
- (void)resetMuteState;
- (void)userDidMute;
- (void)userDidUnmute;

@end
