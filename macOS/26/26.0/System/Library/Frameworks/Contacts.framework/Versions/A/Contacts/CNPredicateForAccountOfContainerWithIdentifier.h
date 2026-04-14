@class NSString;

@interface CNPredicateForAccountOfContainerWithIdentifier : CNPredicate

@property (readonly, nonatomic) NSString *containerIdentifier;

- (BOOL)evaluateWithObject:(id)a0;
- (id)init;
- (id)initWithContainerIdentifier:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void).cxx_destruct;

@end
