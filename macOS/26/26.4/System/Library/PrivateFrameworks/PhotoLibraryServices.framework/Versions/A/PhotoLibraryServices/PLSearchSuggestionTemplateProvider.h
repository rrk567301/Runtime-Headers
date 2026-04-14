@class NSArray, NSIndexSet;

@interface PLSearchSuggestionTemplateProvider : NSObject

@property (retain, nonatomic) NSArray *allTemplates;
@property (retain, nonatomic) NSArray *allTemplatesKeys;
@property (retain, nonatomic) NSArray *dateOnlyTemplates;
@property (retain, nonatomic) NSIndexSet *nonIdentifierBasedSupportedSearchEntityTypes;
@property (retain, nonatomic) NSArray *supportedIdentifiers;
@property (retain, nonatomic) NSArray *allDateFilters;

+ (unsigned long long)localeSupportTypeForTemplateWithKey:(id)a0 locale:(id)a1;
+ (id)templateForRankedGroup:(id)a0;

- (void).cxx_destruct;
- (id)_allDateFilters;
- (id)_dateOnlyTemplates;
- (id)dateFilterForSearchSuggestionTemplateDateType:(unsigned long long)a0;
- (id)templatesForSearchIndexCategory:(unsigned long long)a0 secondIndexCategory:(unsigned long long)a1;

@end
