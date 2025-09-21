@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BROperation : NSOperation <BROperationClient> {
    unsigned char _uuid[16];
    id _executionTransation;
}

@property (readonly, getter=isExecuting) char executing;
@property (readonly, getter=isFinished) char finished;
@property (retain, nonatomic) id remoteOperation;
@property (nonatomic) char waitForRemoteToBeCancelled;
@property (nonatomic) char nonDiscretionary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (oneway void)invalidate;
- (void)start;
- (void)cancel;
- (char)_finishIfCancelled;
- (void)_setExecuting:(char)a0;
- (void)_setFinished:(char)a0;
- (void)_setRemoteOperation:(id)a0;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (char)finishIfCancelled;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (oneway void)progressCallbackWithTopic:(id)a0 userInfo:(id)a1;
- (id)remoteFPFSObject;
- (id)remoteLegacyObject;
- (id)remoteObject;
- (oneway void)setRemoteOperationProxy:(id)a0 userInfo:(id)a1;

@end
