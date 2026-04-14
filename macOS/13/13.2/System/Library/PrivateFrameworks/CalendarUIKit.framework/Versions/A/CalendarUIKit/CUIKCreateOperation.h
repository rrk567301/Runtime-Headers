@class NSArray;

@interface CUIKCreateOperation : CUIKUserOperation

@property (retain, nonatomic) NSArray *precomputedInverseObjects;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_executeWithUndoDelegate:(id)a0 error:(id *)a1;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (long long)_inverseOperationSpan;
- (void)_precomputeInverseObjects;

@end
