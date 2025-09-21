@interface ICMusicAccountNotificationsSettingsManager : NSObject

@property (class, readonly, nonatomic) ICMusicAccountNotificationsSettingsManager *sharedManager;

- (id)_getSwitchesDependingOnSubscriptionStatus:(id)a0 withResponse:(id)a1 togglingSwitchesToValue:(char)a2;
- (id)cachedAccountNotificationsNewMusicSwitch;
- (id)cachedAccountNotificationsShowInLibrarySwitch;
- (void)getAccountNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)setAccountNotificationsArtistContentFeature:(char)a0 withCompletionHandler:(id /* block */)a1;
- (void)setCachedAccountNotificationsNewMusicEnabled:(char)a0;
- (void)setCachedAccountNotificationsShowInLibraryEnabled:(char)a0;
- (id)storeRequestContext;

@end
