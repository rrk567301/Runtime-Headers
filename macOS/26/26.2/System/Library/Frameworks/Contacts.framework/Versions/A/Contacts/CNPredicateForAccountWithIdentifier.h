@class NSArray;

@interface CNPredicateForAccountWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSArray *accountIdentifiers;

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)evaluateWithObject:(id)a0;
- (id)init;
- (id)initWithAccountIdentifiers:(id)a0;

@end
