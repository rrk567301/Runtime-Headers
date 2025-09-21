@class NSIndexSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PHSearchSuggestionOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *minMatchPercentByCategoriesType;
@property (nonatomic) unsigned long long suggestionResultTypes;
@property (nonatomic) unsigned long long suggestionLimit;
@property (retain, nonatomic) NSIndexSet *suggestionCategories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *suggestionsHandlerQueue;
@property (nonatomic) BOOL limitSuggestionsToExactTextMatches;
@property (nonatomic) BOOL wantsUnscopedSuggestions;
@property (nonatomic) BOOL wantsPairedSuggestions;
@property (retain, nonatomic) NSIndexSet *substringMatchedCategories;

- (id)jsonDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_minMatchPercentByCategoriesTypeDescription;
- (unsigned long long)minMatchPercentForCategoriesType:(unsigned long long)a0;
- (void)setMinMatchPercent:(unsigned long long)a0 forCategoriesType:(unsigned long long)a1;

@end
