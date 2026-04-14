@interface NSISRestrictedToNonNegativeMarkerVariableToBeMinimized : NSISVariable

- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
