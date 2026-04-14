@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (int)valueRestriction;
- (BOOL)shouldBeMinimized;
- (id)markedConstraint;

@end
