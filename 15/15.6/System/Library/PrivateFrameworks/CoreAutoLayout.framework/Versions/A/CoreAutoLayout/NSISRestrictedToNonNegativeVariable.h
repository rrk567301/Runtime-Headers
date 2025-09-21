@interface NSISRestrictedToNonNegativeVariable : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (char)shouldBeMinimized;

@end
