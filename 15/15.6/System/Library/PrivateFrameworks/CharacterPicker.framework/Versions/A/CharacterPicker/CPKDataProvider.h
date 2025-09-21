@class NSArray, NSDictionary, NSString, NSMutableArray;
@protocol CPKDataSource;

@interface CPKDataProvider : NSObject {
    NSString *_dataSourceIdentifier;
    long long _searchCategoryIndex;
}

@property (readonly) id<CPKDataSource> dataSource;
@property (readonly) NSArray *favorites;
@property (readonly) NSMutableArray *recents;
@property (retain, nonatomic) NSArray *searchResults;
@property (copy) NSDictionary *state;
@property (readonly, nonatomic) NSArray *suggested;

+ (id)_recentCharacterEntityAtIndex:(long long)a0 inCategory:(long long)a1;
+ (long long)numberOfCharacterColumns;
+ (long long)numberOfCharacterRows;
+ (id)preferableVariationString:(id)a0;

- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (long long)numberOfCategories;
- (void)_displayCountOfRecents:(long long *)a0 favorites:(long long *)a1;
- (id)_filterRecentsFavorites:(id)a0;
- (char)_isSystemCategory:(long long)a0;
- (id)_rawCharacterAtIndex:(long long)a0 inCategory:(long long)a1;
- (id)allCharactersDictionary;
- (id)characterAtIndex:(long long)a0 inCategory:(long long)a1;
- (id)descriptionForCategory:(long long)a0;
- (void)didSelectedEntity:(id)a0;
- (char)hasVariationSelectedEntity:(id)a0;
- (char)isEmojiCategory:(long long)a0;
- (char)isRecentsCategory:(long long)a0;
- (void)loadRecentsAndFavoritesUsingBlock:(id /* block */)a0;
- (char)needsSecondaryDataSourcePreparation;
- (long long)numberOfCharactersInCategory:(long long)a0;
- (id)rawTitleForCategory:(long long)a0;
- (id)replaceToPreferableVariationEntity:(id)a0;
- (void)secondaryDataSourcePreparationUsingBlock:(id /* block */)a0;
- (id)storageIdentifier;
- (id)titleForCategory:(long long)a0;

@end
