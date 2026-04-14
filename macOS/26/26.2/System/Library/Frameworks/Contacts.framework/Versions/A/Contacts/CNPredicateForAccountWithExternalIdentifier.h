@class NSString;

@interface CNPredicateForAccountWithExternalIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *accountExternalIdentifier;

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)evaluateWithObject:(id)a0;
- (id)init;
- (id)initWithAccountExternalIdentifier:(id)a0;

@end
