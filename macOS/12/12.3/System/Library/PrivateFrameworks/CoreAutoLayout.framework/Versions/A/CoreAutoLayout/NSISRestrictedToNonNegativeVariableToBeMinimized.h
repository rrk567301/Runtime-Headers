@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (int)valueRestriction;
- (BOOL)shouldBeMinimized;
- (id)markedConstraint;

@end
