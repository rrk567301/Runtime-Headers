@class NSString;

@interface _NSGlobalPrefs10_3FavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSString *_preferenceKey;
    NSString *_domain;
}

- (void)dealloc;
- (id)init;
- (BOOL)writeColorsToBacking:(id)a0;
- (id)colorsFromBacking;
- (void)remoteColorsDidChange:(id)a0;
- (id)initWithPreferenceKey:(id)a0 domain:(id)a1;
- (void)postDistributedNotification;

@end
