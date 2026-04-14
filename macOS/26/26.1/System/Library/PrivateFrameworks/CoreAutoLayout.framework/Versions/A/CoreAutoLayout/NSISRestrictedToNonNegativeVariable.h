@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
