@class TRIServerContext, NSObject;
@protocol OS_dispatch_queue, TRITaskQueuing;

@interface TRIXPCServerContextPromise : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fullfillmentQueue;
@property (retain, nonatomic) TRIServerContext *serverContext;
@property (retain, nonatomic) id<TRITaskQueuing> taskQueue;

- (void)addBlockToExecuteAfterPromiseFullfillment:(id /* block */)a0;
- (void)reject;
- (id)init;
- (void)fullfillWithContext:(id)a0 taskQueue:(id)a1;
- (void).cxx_destruct;

@end
