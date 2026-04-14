@class NSString, CCSetChangeQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CCSetChangeXPCListener : NSObject

@property (readonly, nonatomic) id /* block */ handlerBlock;
@property (readonly, nonatomic) id /* block */ batchHandlerBlock;
@property (readonly, nonatomic) CCSetChangeQueue *setChangeQueue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 batchHandlerBlock:(id /* block */)a1 queue:(id)a2;
- (id)initWithIdentifier:(id)a0 handlerBlock:(id /* block */)a1 queue:(id)a2;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 handlerBlock:(id /* block */)a2 batchHandlerBlock:(id /* block */)a3;

@end
