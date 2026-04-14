@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
