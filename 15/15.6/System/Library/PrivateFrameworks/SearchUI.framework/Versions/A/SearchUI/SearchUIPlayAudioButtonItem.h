@class SFPlayAudioButtonItem;

@interface SearchUIPlayAudioButtonItem : SearchUIToggleButtonItem

@property (retain) SFPlayAudioButtonItem *sfButtonItem;
@property char gotNowPlayingChangedNotificationAfterPlaying;
@property char needsUpdate;

+ (char)isSingleItemMedia:(id)a0;

- (unsigned long long)status;
- (char)hasState;
- (void)playbackStateDidChange;
- (id)toggledTitle;
- (id)untoggledTitle;
- (void)buttonPressed;
- (void)updatePlayState;
- (char)allowsContextMenu;
- (id)commandForStatus:(unsigned long long)a0;
- (id)initWithSFButtonItem:(id)a0;
- (void)newPlayButtonPressedWithNotification:(id)a0;
- (void)nowPlayingItemDidChange;
- (id)offStateSymbolName;
- (id)onStateSymbolName;
- (void)playbackDidFinish;
- (char)shouldSkipUpdate;
- (void)toggleOff;

@end
