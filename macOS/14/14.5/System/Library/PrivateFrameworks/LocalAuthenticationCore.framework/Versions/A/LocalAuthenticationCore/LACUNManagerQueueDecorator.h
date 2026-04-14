@class NSString, NSObject;
@protocol OS_dispatch_queue, LACUNManager;

@interface LACUNManagerQueueDecorator : NSObject <LACUNManager> {
    id<LACUNManager> _manager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelAllNotificationsWithCompletion:(id /* block */)a0;
- (void)cancelNotificationsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithManager:(id)a0 replyQueue:(id)a1;
- (id)initWithManager:(id)a0 workQueue:(id)a1 replyQueue:(id)a2;
- (void)postNotification:(id)a0 completion:(id /* block */)a1;

@end
