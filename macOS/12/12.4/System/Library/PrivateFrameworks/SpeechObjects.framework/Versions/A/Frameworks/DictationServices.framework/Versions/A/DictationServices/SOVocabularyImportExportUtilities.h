@interface SOVocabularyImportExportUtilities : NSObject

+ (id)localeIdentifiersRepresentedByVocabularyEntries:(id)a0;
+ (id)vocabularyEntriesFromSimpleTextListString:(id)a0 usingLocaleIdentifier:(id)a1;
+ (unsigned long long)importVocabularyEntries:(id)a0 didFindOverflow:(BOOL *)a1;
+ (unsigned long long)maximumNumberOfAllowedEntries;
+ (id)stringContainingSimpleTextListOfCurrentVocabularyMatchingLocaleIdentifiers:(id)a0;
+ (id)stringContainingSimpleTextListOfCurrentVocabulary;
+ (id)stringsFromCurrentVocabularyMatchingLocaleIdentifier:(id)a0;

@end
