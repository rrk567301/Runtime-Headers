@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BSServiceDispatchQueue : BSServiceQueue <BSNSXPCSending> {
    BOOL _main;
    BOOL _isAssociated;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainQueue;
+ (id)queueWithName:(id)a0 serviceQuality:(id)a1;
+ (id)queueWithName:(id)a0;
+ (id)queueWithName:(id)a0 serviceQuality:(id)a1 targetQueue:(id)a2;
+ (id)queueWithName:(id)a0 targetQueue:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)assertBarrierOnQueue;
- (void)performAfter:(double)a0 withBlock:(id /* block */)a1;
- (void)performAsync:(id /* block */)a0;
- (void)performAsyncAndWait:(id /* block */)a0;
- (void)_performAsync:(id /* block */)a0 withHandoff:(id)a1;
- (id)_xpcReplyQueue;
- (void)_xpcReplyQueue_performReply:(id /* block */)a0;

@end
