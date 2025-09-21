@interface NSLikePredicateOperator : NSMatchingPredicateOperator

- (SEL)selector;
- (char)_shouldEscapeForLike;
- (id)symbol;

@end
