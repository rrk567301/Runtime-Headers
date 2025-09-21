@class NSPredicate, NSError;

@interface FigAlternatePredicateValidator : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    struct OpaqueFigSimpleMutex { } *_mutex;
    char _result;
    NSError *_error;
    char _isEvaluated;
}

+ (char)validateKeyPathForMinMaxQualifiers:(id)a0;

- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (id)initWithPredicate:(id)a0;
- (char)validateWithError:(id *)a0;
- (char)_allowCallingFunctionWithName:(id)a0;
- (char)_keyPathComponentIsAllowed:(id)a0;
- (id)_keyPathComponents:(id)a0;
- (char)_unsafeEvaluateKeyPathWithDummy:(id)a0;
- (char)_validateKeyPath:(id)a0;

@end
