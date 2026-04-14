@class NSMutableDictionary;

@interface WFWorkflowRunQueue : NSObject

@property (readonly, nonatomic) NSMutableDictionary *queueTable;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)queueForDescriptor:(id)a0 createIfNeeded:(BOOL)a1;
- (void)queueRequest:(id)a0 inQueue:(id)a1;
- (id)popRequestFromQueueWithType:(unsigned long long)a0 identifier:(id)a1;

@end
