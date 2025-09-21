@interface IPRegexToolbox : NSObject

+ (id)emailSubjectPrefixRegex;
+ (id)firstMatchingKeywordForRegex:(id)a0 inString:(id)a1 needsToLowercase:(char)a2;
+ (char)isRangeInsideQuotationMarks:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 text:(id)a1 limitToSurroundingText:(char)a2;
+ (char)isRangeNearbyExclusionKeyword:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 text:(id)a1 limitToSurroundingText:(char)a2 language:(id)a3;
+ (id)matchingKeywordResultsForRegex:(id)a0 inString:(id)a1 needsToLowercase:(char)a2;
+ (unsigned long long)numberOfMatchesForRegex:(id)a0 inString:(id)a1 needsToLowercase:(char)a2;
+ (id)regexPatternByUncapturingPattern:(id)a0;
+ (id)regexPatternForLanguageID:(id)a0 eventVocabularyArray:(id)a1;
+ (id)regexPatternWithPrefix:(id)a0 suffix:(id)a1 choices:(id)a2;
+ (id)regularExpressionWithKey:(id)a0 generator:(id /* block */)a1;

@end
