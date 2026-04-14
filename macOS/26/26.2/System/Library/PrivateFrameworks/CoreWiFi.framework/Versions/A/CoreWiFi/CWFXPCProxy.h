@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCProxy : NSProxy

@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)__copyReplyBlockFromInvocation:(id)a0;

@end
