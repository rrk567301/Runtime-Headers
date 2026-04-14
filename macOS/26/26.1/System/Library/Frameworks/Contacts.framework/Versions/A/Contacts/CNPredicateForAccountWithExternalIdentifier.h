@class NSString;

@interface CNPredicateForAccountWithExternalIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *accountExternalIdentifier;

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)evaluateWithObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountExternalIdentifier:(id)a0;

@end
