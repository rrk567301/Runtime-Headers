@class NSArray;

@interface CNPredicateForAccountWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSArray *accountIdentifiers;

- (BOOL)evaluateWithObject:(id)a0;
- (id)init;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccountIdentifiers:(id)a0;

@end
