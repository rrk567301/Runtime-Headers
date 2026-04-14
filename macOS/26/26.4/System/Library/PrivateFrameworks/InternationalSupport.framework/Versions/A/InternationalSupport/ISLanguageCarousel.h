@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ISLanguageCarousel : NSObject

@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) unsigned long long queueIndex;
@property (nonatomic) BOOL regionDetectionComplete;
@property (nonatomic) BOOL regionDetectionStarted;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL cycle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL mergeDuplicates;
@property (nonatomic) BOOL randomize;
@property (nonatomic) BOOL rankingUsesGuessedRegion;
@property (nonatomic) BOOL rankingUsesPreferredLanguages;
@property (copy, nonatomic) NSString *guessedRegionOverride;
@property (nonatomic) BOOL weightedRepetition;
@property (copy, nonatomic) id /* block */ regionDetectionCompletionHandler;

+ (id)rankedItemsFromItems:(id)a0 usingSystemLanguages:(id)a1 preferredLanguages:(id)a2 region:(id)a3;

- (id)initWithItems:(id)a0;
- (id)allItems;
- (void)reloadQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_callRegionDetectionCompletionHandler;
- (id)_guessedRegion;
- (id)_itemsWithMergedDuplicates:(id)a0;
- (id)_rankedItems:(id)a0 usePreferredLanguages:(BOOL)a1 guessedRegion:(BOOL)a2;
- (void)_reloadQueue;
- (void)_startRegionDetectionIfNeeded;
- (id)initWithItems:(id)a0 regionDetectionCompletionHandler:(id /* block */)a1;
- (id)nextItem;

@end
