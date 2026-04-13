@class EKChangeTracker;

@interface CUIKRevertOperation : CUIKUserOperation

@property (retain) EKChangeTracker *originalChangeTracker;

+ (id)operationForContext:(id)a0;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)_execute:(id *)a0;
- (Class)_inverseOperationClass;
- (id)_inverseOperation;

@end
