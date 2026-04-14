@class NSArray;

@interface CNPredicateForAccountWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSArray *accountIdentifiers;

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)evaluateWithObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountIdentifiers:(id)a0;

@end
