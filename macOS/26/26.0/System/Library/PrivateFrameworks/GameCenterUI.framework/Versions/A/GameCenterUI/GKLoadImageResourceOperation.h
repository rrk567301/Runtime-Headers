@class NSURL, NSObject;
@protocol OS_dispatch_queue, GKResourceDataConsumer;

@interface GKLoadImageResourceOperation : GKLoadResourceOperation

@property (class, readonly) NSObject<OS_dispatch_queue> *dataConsumerQueue;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<GKResourceDataConsumer> dataConsumer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataConsumerQueue;

+ (id)URLSession;

- (BOOL)isAsynchronous;
- (void)start;
- (void).cxx_destruct;
- (void)didFinishTaskWithData:(id)a0;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;

@end
