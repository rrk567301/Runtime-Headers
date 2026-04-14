@class NSArray, NSDictionary, NSString, NSMutableArray;
@protocol CPKDataSource;

@interface CPKDataProvider : NSObject {
    NSString *_dataSourceIdentifier;
    long long _searchCategoryIndex;
}

@property (readonly) id<CPKDataSource> dataSource;
@property (retain, nonatomic) NSArray *searchResults;
@property (readonly) NSArray *favorites;
@property (readonly) NSMutableArray *recents;
@property (copy) NSDictionary *state;

+ (long long)numberOfCharacterColumns;
+ (long long)numberOfCharacterRows;

- (void)dealloc;
- (id)initWithDataSource:(id)a0;
- (BOOL)isEmojiCategory:(long long)a0;
- (id)descriptionForCategory:(long long)a0;
- (id)storageIdentifier;
- (BOOL)needsSecondaryDataSourcePreparation;
- (void)secondaryDataSourcePreparationUsingBlock:(id /* block */)a0;
- (void)loadRecentsAndFavoritesUsingBlock:(id /* block */)a0;
- (id)_filterRecentsFavorites:(id)a0;
- (void)didSelectedEntity:(id)a0;
- (long long)numberOfCategories;
- (long long)numberOfCharactersInCategory:(long long)a0;
- (id)titleForCategory:(long long)a0;
- (id)rawTitleForCategory:(long long)a0;
- (id)characterAtIndex:(long long)a0 inCategory:(long long)a1;
- (long long)initialSelectedCategoryIndex;
- (id)allCharactersDictionary;
- (id)replaceToPreferableVariationEntity:(id)a0;
- (BOOL)hasVariationSelectedEntity:(id)a0;
- (BOOL)isRecentsCategory:(long long)a0;
- (id)_rawCharacterAtIndex:(long long)a0 inCategory:(long long)a1;
- (void)_displayCountOfRecents:(long long *)a0 favorites:(long long *)a1;
- (BOOL)_isSystemCategory:(long long)a0;

@end
