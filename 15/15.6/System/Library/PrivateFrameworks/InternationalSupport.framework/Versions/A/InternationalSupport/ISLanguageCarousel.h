@class NSArray;

@interface ISLanguageCarousel : NSObject

@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) unsigned long long queueIndex;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) char cycle;
@property (nonatomic) char mergeDuplicates;
@property (nonatomic) char randomize;
@property (nonatomic) char rankingUsesGuessedRegion;
@property (nonatomic) char rankingUsesPreferredLanguages;
@property (nonatomic) char weightedRepetition;

+ (id)_rankedItems:(id)a0 usePreferredLanguages:(char)a1 guessedRegion:(char)a2;
+ (id)guessedRegion;
+ (id)rankedItemsFromItems:(id)a0 usingSystemLanguages:(id)a1 preferredLanguages:(id)a2 region:(id)a3;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (id)allItems;
- (id)_itemsWithMergedDuplicates:(id)a0;
- (id)nextItem;
- (void)reloadQueue;

@end
