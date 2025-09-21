@class NSSet;

@interface PHAPredicateValidator : NSObject

@property (retain) NSSet *allowedKeyPaths;

- (void).cxx_destruct;
- (char)validateValue:(id)a0 error:(id *)a1;
- (char)validatePredicate:(id)a0 error:(id *)a1;
- (char)validateExpression:(id)a0 error:(id *)a1;

@end
