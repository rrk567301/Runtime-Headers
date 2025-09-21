@interface CUIKUndeleteFutureOperation : CUIKCreateOperation

- (char)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
