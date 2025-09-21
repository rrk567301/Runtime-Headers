@interface NSISRestrictedToZeroMarkerVariable : NSISVariable

- (int)valueRestriction;
- (id)markedConstraint;
- (char)shouldBeMinimized;

@end
