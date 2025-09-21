@interface CKLegacyPredicateValidator : CKPredicateValidator

- (void)validate:(id)a0;
- (char)validateBasicOperatorPredicate:(id)a0;
- (char)validate:(id)a0 error:(id *)a1;
- (char)validateContainsAllInPredicate:(id)a0;
- (unsigned long long)_comparisonOptionForString:(id)a0;
- (char)validateBeginsWithPredicate:(id)a0;
- (char)validateBetweenPredicate:(id)a0;
- (void)validateComparisonPredicate:(id)a0;
- (void)validateCompoundPredicate:(id)a0;
- (char)validateContainsAnyPredicate:(id)a0;
- (char)validateContainsPredicate:(id)a0;
- (char)validateFullTextSearchPredicate:(id)a0;
- (char)validateInPredicate:(id)a0;
- (char)validateNearPredicate:(id)a0;

@end
