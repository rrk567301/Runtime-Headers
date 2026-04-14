@interface NSISRestrictedToNonNegativeMarkerVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
