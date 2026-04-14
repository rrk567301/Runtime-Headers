@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (int)valueRestriction;
- (BOOL)shouldBeMinimized;
- (id)markedConstraint;

@end
