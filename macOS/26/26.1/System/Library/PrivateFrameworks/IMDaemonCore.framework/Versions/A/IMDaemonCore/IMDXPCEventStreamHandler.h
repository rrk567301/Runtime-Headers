@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface IMDXPCEventStreamHandler : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)initWithEventStreamName:(const char *)a0;
- (id)init;
- (void)didReceiveEventWithName:(id)a0 userInfo:(id)a1;
- (id)queueForDelegate:(id)a0;

@end
