@interface ICMusicAccountNotificationsSettingsManager : NSObject

@property (class, readonly, nonatomic) ICMusicAccountNotificationsSettingsManager *sharedManager;

- (id)cachedAccountNotificationsShowInLibrarySwitch;
- (void)setAccountNotificationsArtistContentFeature:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)setCachedAccountNotificationsNewMusicEnabled:(BOOL)a0;
- (id)cachedAccountNotificationsNewMusicSwitch;
- (void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)a0;
- (id)storeRequestContext;
- (id)_getSwitchesDependingOnSubscriptionStatus:(id)a0 withResponse:(id)a1 togglingSwitchesToValue:(BOOL)a2;
- (void)getAccountNotificationsWithCompletionHandler:(id /* block */)a0;

@end
