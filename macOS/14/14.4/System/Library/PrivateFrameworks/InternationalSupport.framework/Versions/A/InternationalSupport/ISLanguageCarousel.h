@class NSArray;

@interface ISLanguageCarousel : NSObject

@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) unsigned long long queueIndex;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL cycle;
@property (nonatomic) BOOL mergeDuplicates;
@property (nonatomic) BOOL randomize;
@property (nonatomic) BOOL rankingUsesGuessedRegion;
@property (nonatomic) BOOL rankingUsesPreferredLanguages;
@property (nonatomic) BOOL weightedRepetition;

+ (id)guessedRegion;
+ (id)rankedItemsFromItems:(id)a0 usingSystemLanguages:(id)a1 preferredLanguages:(id)a2 region:(id)a3;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (id)allItems;
- (id)nextItem;
- (id)rankedItemsUsingPreferredLanguages:(BOOL)a0 guessedRegion:(BOOL)a1;
- (void)reloadQueue;

@end
