@interface CUIKUnsliceOperation : CUIKSaveOperation

- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (id)originalObjects;
- (id)_inverseForUndoSliceOutcome:(id)a0;

@end
