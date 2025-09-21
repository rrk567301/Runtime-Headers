@class NSArray;

@interface CUIKDeleteOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects;

- (void).cxx_destruct;
- (id)_actionName;
- (char)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (char)_canBeUndone;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;

@end
