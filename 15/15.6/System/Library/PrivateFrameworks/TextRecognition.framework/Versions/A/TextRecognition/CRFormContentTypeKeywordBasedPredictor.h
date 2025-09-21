@interface CRFormContentTypeKeywordBasedPredictor : NSObject

+ (id)supportedLanguages;
+ (id)_keywordMapForPriorityKeywords:(char)a0;
+ (id)useKeywordTypes;
+ (unsigned long long)_nonStructuralContentTypeFromType:(unsigned long long)a0;
+ (char)_shouldPredictContentTypeForLabel:(id)a0 locale:(id)a1;
+ (id)lookupLanguagesForLanguage:(id)a0;
+ (unsigned long long)predictContentTypeWithKeywordMatching:(id)a0 locale:(id)a1 keyword:(id *)a2 withPriorityKeywords:(char)a3;

@end
