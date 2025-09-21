@class NSMutableArray, NSObject;
@protocol OS_dispatch_group, CKDOperationPipelining, CKDURLRequestPipelining, OS_dispatch_queue;

@interface CKDPipeliningInfo : NSObject

@property (nonatomic) char perRequestCallbackQueueSuspended;
@property (retain, nonatomic) NSMutableArray *perRequestCallbackBlocks;
@property (nonatomic) char isCancelled;
@property (retain, nonatomic) id<CKDURLRequestPipelining> request;
@property (weak, nonatomic) id<CKDOperationPipelining> operation;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestCallbackGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *perRequestGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *perRequestCallbackQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForUnitTests;
- (void)disablePerRequestCallbackBlocks;
- (id)_initWithRequest:(id)a0 operation:(id)a1;
- (void)addPerRequestCallbackBlock:(id /* block */)a0;
- (void)cancelAndDisablePerRequestCallbackBlocks;
- (id)initWithRequest:(id)a0 operation:(id)a1;
- (void)resumeCallbackQueue;
- (void)suspendCallbackQueue;

@end
