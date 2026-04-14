@class NSArray, NSString, NSError;

@interface CUIKUserOperation : NSObject

@property (retain) NSArray *objects;
@property long long span;
@property (retain) NSArray *originalObjects;
@property (retain) NSArray *originalSliceDescriptions;
@property (retain) NSString *precomputedActionName;
@property (retain) CUIKUserOperation *precomputedInverseOperation;
@property BOOL inverseOperationPrecomputed;
@property (readonly, nonatomic) NSString *actionName;
@property (retain) NSError *error;

+ (id)operationWithObjects:(id)a0 span:(long long)a1;
+ (id)operationForContext:(id)a0;

- (void).cxx_destruct;
- (id)_actionName;
- (BOOL)execute;
- (BOOL)_execute:(id *)a0;
- (void)_precomputeInverseOperation;
- (void)_storeOriginalSliceDescriptions;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (id)_inverseOperation;
- (id)inverseOperation;
- (void)_precomputeActionName;
- (id)initWithObjects:(id)a0 span:(long long)a1;

@end
