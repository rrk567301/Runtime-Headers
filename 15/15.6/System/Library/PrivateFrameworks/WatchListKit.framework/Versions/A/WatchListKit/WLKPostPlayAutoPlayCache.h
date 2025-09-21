@class NSUserDefaults;

@interface WLKPostPlayAutoPlayCache : NSObject {
    NSUserDefaults *_userDefaults;
    int _postPlayAutoPlayNextEpisodeSettingChangedNotificationToken;
    int _postPlayAutoPlayRecommendedItemsSettingChangedNotificationToken;
}

+ (void)_postLocalNotificationForType:(unsigned long long)a0 status:(char)a1 error:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithUserDefaults:(id)a0;
- (id)currentSettings;
- (id)_cacheKeyForType:(unsigned long long)a0;
- (char)_cacheResultForType:(unsigned long long)a0;
- (void)_setEnabled:(char)a0 type:(unsigned long long)a1;
- (char)currentSettingForType:(unsigned long long)a0;
- (char)hasCacheForType:(unsigned long long)a0;
- (char)isWaitingForConnection;
- (void)setIsWaitingForConnection:(char)a0;
- (void)updateWithSettings:(id)a0;

@end
