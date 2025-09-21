@class NSIndexSet, NSMutableDictionary;

@interface PSISuggestionOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *minMatchPercentByCategoriesType;
@property (readonly, nonatomic) unsigned long long searchSuggestionType;
@property (readonly, nonatomic) unsigned long long searchSuggestionLimit;
@property (nonatomic) BOOL enableNextTokenSuggestions;
@property (nonatomic) unsigned long long suggestionResultTypes;
@property (nonatomic) BOOL limitSuggestionsToExactTextMatches;
@property (nonatomic) unsigned long long locationInQueryStringForSuggestionGeneration;
@property (retain, nonatomic) NSIndexSet *suggestionCategories;
@property (nonatomic) BOOL wantsPairedSuggestions;
@property (nonatomic) BOOL wantsUnscopedSuggestions;
@property (nonatomic) unsigned long long minNumberOfResultsForNextTokenGeneration;
@property (retain, nonatomic) NSIndexSet *substringMatchedCategories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_minMatchPercentByCategoriesTypeDescription;
- (id)initWithSuggestionType:(unsigned long long)a0 suggestionLimit:(unsigned long long)a1;
- (unsigned long long)minMatchPercentForCategoriesType:(unsigned long long)a0;
- (void)setMinMatchPercent:(unsigned long long)a0 forCategoriesType:(unsigned long long)a1;
- (BOOL)optionsWantSuggestionsForAssets;
- (BOOL)optionsWantSuggestionsForCollections;

@end
