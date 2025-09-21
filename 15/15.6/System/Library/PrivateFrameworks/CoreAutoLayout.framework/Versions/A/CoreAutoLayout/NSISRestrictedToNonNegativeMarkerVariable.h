@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (char)shouldBeMinimized;

@end
