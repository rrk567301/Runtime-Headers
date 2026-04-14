@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCProxy : NSProxy

@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)__copyReplyBlockFromInvocation:(id)a0;

@end
