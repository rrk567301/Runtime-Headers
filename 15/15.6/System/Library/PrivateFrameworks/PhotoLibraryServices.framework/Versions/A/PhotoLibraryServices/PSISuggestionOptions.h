@class NSIndexSet;

@interface PSISuggestionOptions : NSObject <NSCopying>

@property (nonatomic) char _wantsUnscopedSuggestions;
@property (readonly, nonatomic) unsigned long long searchSuggestionType;
@property (readonly, nonatomic) unsigned long long searchSuggestionLimit;
@property (nonatomic) char enableNextTokenSuggestions;
@property (nonatomic) unsigned long long suggestionResultTypes;
@property (nonatomic) char limitSuggestionsToExactTextMatches;
@property (nonatomic) unsigned long long locationInQueryStringForSuggestionGeneration;
@property (retain, nonatomic) NSIndexSet *suggestionCategories;
@property (nonatomic) unsigned long long minNumberOfResultsForNextTokenGeneration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_suggestionCategoriesTypeDescription;
- (id)initWithSuggestionType:(unsigned long long)a0 suggestionLimit:(unsigned long long)a1;
- (char)optionsWantSuggestionsForAssets;
- (char)optionsWantSuggestionsForCollections;

@end
