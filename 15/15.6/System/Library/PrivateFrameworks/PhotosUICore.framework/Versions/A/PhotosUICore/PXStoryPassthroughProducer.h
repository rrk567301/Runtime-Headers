@class NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryPassthroughProducer : NSObject

@property (readonly, nonatomic) char prefersAsynchronousDelivery;
@property (readonly, nonatomic) char allowsProgress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id result;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)initWithResult:(id)a0 options:(unsigned long long)a1;
- (id)requestResultWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
