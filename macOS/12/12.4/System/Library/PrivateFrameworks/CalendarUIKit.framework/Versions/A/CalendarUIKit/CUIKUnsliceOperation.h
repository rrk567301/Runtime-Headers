@interface CUIKUnsliceOperation : CUIKSaveOperation

- (BOOL)_execute:(id *)a0;
- (id)originalObjects;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (id)_inverseForUndoSliceOutcome:(id)a0;

@end
