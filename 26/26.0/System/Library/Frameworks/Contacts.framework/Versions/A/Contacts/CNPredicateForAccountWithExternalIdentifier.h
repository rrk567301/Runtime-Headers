@class NSString;

@interface CNPredicateForAccountWithExternalIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *accountExternalIdentifier;

- (BOOL)evaluateWithObject:(id)a0;
- (id)init;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void).cxx_destruct;
- (id)initWithAccountExternalIdentifier:(id)a0;

@end
