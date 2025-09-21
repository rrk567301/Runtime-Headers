@interface SPSearchSuggestionsBuilder : NSObject

+ (id)asYouTypeResultsFromResponse:(id)a0 withQueryContext:(id)a1;
+ (id)asYouTypeSectionsFromResponse:(id)a0 withQueryContext:(id)a1;
+ (id)visibleTextForResult:(id)a0 includeDescriptions:(BOOL)a1;

@end
