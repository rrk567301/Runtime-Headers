@interface NSLikePredicateOperator : NSMatchingPredicateOperator

- (SEL)selector;
- (id)symbol;
- (BOOL)_shouldEscapeForLike;

@end
