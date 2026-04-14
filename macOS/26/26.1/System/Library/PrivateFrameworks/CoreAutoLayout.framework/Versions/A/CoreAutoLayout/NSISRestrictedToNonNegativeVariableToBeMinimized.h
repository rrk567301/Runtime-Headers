@interface NSISRestrictedToNonNegativeVariableToBeMinimized : NSISVariable

- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
