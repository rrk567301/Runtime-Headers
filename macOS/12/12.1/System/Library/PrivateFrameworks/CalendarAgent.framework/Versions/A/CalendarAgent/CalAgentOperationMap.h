@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface CalAgentOperationMap : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (retain, nonatomic) NSMapTable *map;

- (id)description;
- (void)load;
- (void).cxx_destruct;
- (id)copyLinkedOperationForOperationWithName:(id)a0 inputPayload:(id)a1;

@end
