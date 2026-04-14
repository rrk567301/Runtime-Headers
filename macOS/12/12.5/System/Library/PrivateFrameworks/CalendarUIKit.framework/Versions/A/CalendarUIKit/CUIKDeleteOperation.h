@interface CUIKDeleteOperation : CUIKUserOperation

- (id)_actionName;
- (BOOL)_execute:(id *)a0;
- (id)_undeletedObjects;
- (id)_undoSliceOutcomes;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
