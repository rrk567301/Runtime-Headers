@interface SPSearchSuggestionsBuilder : NSObject

+ (id)iconForBundle:(id)a0 withKey:(id)a1;
+ (id)compactCardSectionForResult:(id)a0;
+ (id)visibleTextForResult:(id)a0 includeDescriptions:(BOOL)a1;
+ (void)disambiguateResultsIfNecessary:(id)a0;
+ (id)buildSystemPreferenceImageWithFilePath:(id)a0;
+ (id)asYouTypeSectionsFromResponse:(id)a0 withQueryString:(id)a1 keyboardLanguage:(id)a2;

@end
