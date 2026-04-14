@interface NSISUnrestrictedVariable : NSISVariable

- (BOOL)shouldBeMinimized;
- (id)markedConstraint;
- (int)valueRestriction;

@end
