@class NSString;

@interface CPKDefaultDataSource : NSObject <CPKDataSource> {
    id _contents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)state;
+ (void)setState:(id)a0;
+ (id)recents;
+ (void)setRecents:(id)a0;
+ (id)preferredLanguagesForSearch;
+ (void)emojiTokensForSearchString:(id)a0 inLanguages:(id)a1 maxResults:(unsigned long long)a2 usingBlock:(id /* block */)a3;
+ (void)didDisplaySkinToneHelp;
+ (void)loadRecentsAndFavoritesUsingBlock:(id /* block */)a0;
+ (id)favorites;
+ (void)setRecentString:(id)a0;
+ (id)copySkintoneHelpViewControllerForEmoji:(id)a0 usingBlock:(id /* block */)a1;
+ (void **)_classGlobalBufferPtr;
+ (struct { long long x0; id x1; id x2; long long x3; id x4; id x5; id x6; } *)_classGlobalPtr;
+ (id)_dataCategories;
+ (id)loadEmojiCategoryData:(id)a0;
+ (BOOL)_prepareCategoriesWithFastData;
+ (void)loadCategoryData:(id)a0 usingBlock:(id /* block */)a1;
+ (void)_cacheDataArrayOnlyFastData:(BOOL)a0 usingBlock:(id /* block */)a1;
+ (void)clearRecentStrings;
+ (const struct __EmojiLocaleDataWrapper { } *)preferredEmojiLocale;
+ (id)_expandNestedDataArray:(id)a0;
+ (id)_prefixCategories;
+ (void)changeActiveCategories;
+ (id)sharedEmojiPreference;
+ (void)loadRecentsUsingBlock:(id /* block */)a0;
+ (void)setFavorites:(id)a0;
+ (id)skinToneDictionary;
+ (id)standardItemArrayFromArray:(id)a0;
+ (long long)indexInArray:(id)a0 fromStandardItemIndex:(long long)a1;
+ (id)localizedCharacterName:(id)a0;
+ (id)normalizedSkinToneString:(id)a0;
+ (id)lastUsedSkinToneEmojiForEmoji:(id)a0;
+ (void)setCharacterPaletteLaunchParam:(id)a0 forKey:(id)a1;
+ (id)characterPaletteLaunchParamForKey:(id)a0;

- (void)dealloc;
- (BOOL)_hasCachedData;
- (BOOL)needsSecondaryDataSourcePreparation;
- (void)secondaryDataSourcePreparationUsingBlock:(id /* block */)a0;
- (void)prepareOnlyFastDataUsingBlock:(id /* block */)a0;
- (long long)numberOfCategories;
- (id)titleForCategory:(long long)a0;
- (id)descriptionForCategory:(long long)a0;
- (BOOL)isEmojiCategory:(long long)a0;
- (id)storageIdentifier;
- (BOOL)isEmojiOnlyDataSource;
- (long long)numberOfCharactersInCategory:(long long)a0;
- (id)characterAtIndex:(long long)a0 inCategory:(long long)a1;
- (id)characterFromIdentifier:(id)a0;
- (long long)initialSelectedCategoryIndex;
- (void)prepareDataOnlyFastData:(BOOL)a0 usingBlock:(id /* block */)a1;
- (BOOL)_cacheDecomposedEntityDataWithCheckGlyph:(BOOL)a0 forceUpdate:(BOOL)a1;
- (id)_entityArrayInCategory:(long long)a0;
- (BOOL)_shouldOmitCharacter:(id)a0;
- (void)prepareDataUsingBlock:(id /* block */)a0;

@end
