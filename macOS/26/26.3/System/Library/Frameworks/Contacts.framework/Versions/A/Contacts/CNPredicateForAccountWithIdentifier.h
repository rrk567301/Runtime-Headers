@class NSArray;

@interface CNPredicateForAccountWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSArray *accountIdentifiers;

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)initWithAccountIdentifiers:(id)a0;

@end
