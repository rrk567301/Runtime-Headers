@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (int)valueRestriction;
- (BOOL)shouldBeMinimized;
- (id)markedConstraint;

@end
