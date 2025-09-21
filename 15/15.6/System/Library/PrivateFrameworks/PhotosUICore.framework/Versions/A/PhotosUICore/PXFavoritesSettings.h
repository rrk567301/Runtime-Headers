@class NSArray;
@protocol PXFavoritesSettingsDelegate;

@interface PXFavoritesSettings : PXSettings {
    char _didEncounterUnknownSettingsClassName;
}

@property (weak, nonatomic) id<PXFavoritesSettingsDelegate> delegate;
@property (copy, nonatomic) NSArray *favoritesSettingsClassNames;

+ (id)sharedInstance;
+ (id)transientProperties;

- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)parentSettings;
- (id)_keyForFavoriteExistingAtIndex:(long long)a0;
- (id)_keyForFavoriteNameAtIndex:(long long)a0;
- (void)_notifyChange;
- (void)_performBlockAfterLoadingAccessorySettings:(id /* block */)a0;
- (char)isFavoriteSettings:(id)a0;
- (void)setIsFavorite:(char)a0 settings:(id)a1;

@end
