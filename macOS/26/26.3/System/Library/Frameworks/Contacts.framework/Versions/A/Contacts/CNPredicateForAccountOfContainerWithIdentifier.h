@class NSString;

@interface CNPredicateForAccountOfContainerWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *containerIdentifier;

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)init;
- (id)initWithContainerIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;

@end
