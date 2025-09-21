@class NSString, FINodePropertyList, FINode;

@interface FIOperationRecord : NSObject

@property (copy) FINodePropertyList *nodePropertyList;
@property struct OpaquePropertyListRef { } *propertyList;
@property (readonly) struct shared_ptr<TDSOperationRecord> { struct TDSOperationRecord *__ptr_; struct __shared_weak_count *__cntrl_; } operationRecord;
@property (readonly) FINode *source;
@property (readonly) FINode *destination;
@property unsigned int requestedOperation;
@property (copy) NSString *targetName;
@property (readonly) FINode *originalSourceParent;
@property (readonly) FINode *resolvedDestination;
@property (readonly) FINode *targetNode;
@property (readonly) unsigned int operationOptions;
@property (readonly) unsigned int conflict;
@property unsigned int completedOperation;
@property unsigned int resolution;
@property (readonly) long long physicalSizeNeeded;
@property (readonly) long long logicalSizeOfItems;
@property (readonly) long long itemCount;
@property (readonly) BOOL translocationChanged;
@property BOOL needsAuthentication;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 destination:(id)a1 nodePropertyList:(id)a2 requestedOperation:(unsigned int)a3;
- (void)addConflict:(unsigned int)a0;
- (void)addOperationOptions:(unsigned int)a0;
- (void)clearConflict:(unsigned int)a0;
- (void)clearOperationOptions:(unsigned int)a0;
- (id)initWithOperationRecord:(const void *)a0;
- (id)initWithSource:(id)a0 destination:(id)a1 propertyList:(struct OpaquePropertyListRef { } *)a2 requestedOperation:(unsigned int)a3;

@end
