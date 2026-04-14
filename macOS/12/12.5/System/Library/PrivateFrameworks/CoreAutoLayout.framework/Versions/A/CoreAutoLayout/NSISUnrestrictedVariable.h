@interface NSISUnrestrictedVariable : NSISVariable

- (int)valueRestriction;
- (BOOL)shouldBeMinimized;
- (id)markedConstraint;

@end
