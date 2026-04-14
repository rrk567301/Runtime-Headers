@interface PXVideoMuteController : PXObservable

@property (class, readonly, nonatomic) PXVideoMuteController *sharedController;

@property (nonatomic) long long muteState;
@property (readonly, nonatomic) BOOL isMuted;

- (id)debugDescription;
- (id)init;
- (void)setIsMuted:(BOOL)a0;
- (void)_updateIsMuted;
- (void)applicationDidMoveToBackground;
- (void)userDidMute;
- (void)userDidUnmute;

@end
