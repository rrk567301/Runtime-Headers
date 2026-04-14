@class NSObject, NSURLSessionDataTask, NSURLRequest, AMSURLSession;
@protocol OS_dispatch_queue, ASKResourceDataConsumer;

@interface ASKLoadImageResourceOperation : ASKLoadResourceOperation

@property (class, readonly) NSObject<OS_dispatch_queue> *dataConsumerQueue;

@property (retain, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (readonly, nonatomic) id<ASKResourceDataConsumer> dataConsumer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataConsumerQueue;

+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)supportedScheme;

- (BOOL)isAsynchronous;
- (void)setQueuePriority:(long long)a0;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;
- (void)didFinishTaskWithData:(id)a0 response:(id)a1 error:(id)a2;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2 dataConsumerQueue:(id)a3;

@end
