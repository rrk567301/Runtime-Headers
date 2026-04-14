@interface FI_TSlicesInterpreter : NSObject

+ (id)slicesForTag:(id)a0 andLabel:(short)a1;
+ (id)sliceForRawQueryString:(id)a0;
+ (id)sharedSlicesInterpreter;

- (void)queryStringDictionaryForCriterion:(id)a0 withDisplayValue:(id)a1 intoDictionary:(id)a2;
- (id)queryStringForParts:(id)a0 searchSystemFiles:(id *)a1 fileNameOnly:(id *)a2 searchNonFinderFiles:(id *)a3 skipOuterParentheses:(BOOL)a4 subRows:(id)a5;
- (id)queryDictionaryForRow:(id)a0 searchSystemFiles:(id *)a1 fileNameOnly:(id *)a2 searchNonFinderFiles:(id *)a3 skipOuterParentheses:(BOOL)a4;
- (id)queryStringForRules:(id)a0 searchSystemFiles:(id *)a1 fileNameOnly:(id *)a2 searchNonFinderFiles:(id *)a3;
- (id)searchForRules:(id)a0;

@end
