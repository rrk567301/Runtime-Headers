@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (char)shouldBeMinimized;

@end
