@class NSArray;

@interface CNPredicateForAccountWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSArray *accountIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (char)evaluateWithObject:(id)a0;
- (char)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithAccountIdentifiers:(id)a0;

@end
