@class NSString;

@interface _NSGlobalPrefs10_3FavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSString *_preferenceKey;
    NSString *_domain;
}

- (id)init;
- (void)dealloc;
- (id)colorsFromBacking;
- (id)initWithPreferenceKey:(id)a0 domain:(id)a1;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)a0;
- (BOOL)writeColorsToBacking:(id)a0;

@end
