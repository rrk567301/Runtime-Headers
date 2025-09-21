@interface CUIKUnsliceOperation : CUIKSaveOperation

- (char)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (id)originalObjects;
- (id)_inverseForUndoSliceOutcome:(id)a0;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
