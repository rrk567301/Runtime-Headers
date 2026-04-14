@class NSArray, NSDictionary;

@interface CNAutocompleteContactPredicateFactory : NSObject {
    NSArray *_terms;
    NSDictionary *_propertyMap;
    NSArray *_properties;
}

+ (id)predicateForProperties:(id)a0 term:(id)a1;
+ (id)contactPropertyMap;
+ (id)contactIsPersonPredicate;
+ (id)contactIsCompanyPredicate;
+ (id)predicateForProperties:(id)a0 terms:(id)a1;
+ (id)factoryWithTerms:(id)a0 properties:(id)a1;
+ (void)separateKeyPath:(id)a0 intoKey:(id *)a1 valueKeyPath:(id *)a2;

- (void).cxx_destruct;
- (id)makePredicate;
- (id)initWithTerms:(id)a0 properties:(id)a1 propertyMap:(id)a2;
- (id)makePredicateForTerm:(id)a0;
- (id)propertyPredicatesForTerm:(id)a0;
- (id)makeNamePredicatesForTerm:(id)a0;
- (id)makePersonNamePredicateForTerm:(id)a0;
- (id)makeCompanyNamePredicateForTerm:(id)a0;
- (id)makeNamePredicateForTerm:(id)a0 properties:(id)a1 personOrCompanyQualifyingPredicate:(id)a2;
- (void)addPredicateForTerm:(id)a0 property:(id)a1 toCollection:(id)a2;
- (id)makePredicateForTerm:(id)a0 property:(id)a1;
- (id)makePredicateForValue:(id)a0 key:(id)a1;
- (id)makePredicateForValue:(id)a0 relationshipKey:(id)a1 valueKeyPath:(id)a2;

@end
