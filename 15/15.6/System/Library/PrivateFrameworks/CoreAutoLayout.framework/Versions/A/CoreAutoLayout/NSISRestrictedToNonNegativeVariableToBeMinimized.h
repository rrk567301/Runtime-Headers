@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (char)shouldBeMinimized;

@end
