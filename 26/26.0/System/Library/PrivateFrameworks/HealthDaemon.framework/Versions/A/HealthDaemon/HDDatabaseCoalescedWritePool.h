@class NSMutableArray, HDAssertion, HDProfile, HDCoalescedTaskPoolQuota, NSString, NSObject, _HKDelayedOperation;
@protocol OS_os_log, OS_dispatch_queue;

@interface HDDatabaseCoalescedWritePool : NSObject {
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_writeQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _HKDelayedOperation *_pendingWriteOperation;
    NSMutableArray *_pendingWriteQueue;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (copy, nonatomic) HDCoalescedTaskPoolQuota *quota;
@property (retain, nonatomic) HDAssertion *databaseAssertion;

- (void)performWriteWithMaximumLatency:(double)a0 block:(id /* block */)a1 completion:(id /* block */)a2;
- (id)init;
- (id)initWithProfile:(id)a0 name:(id)a1 loggingCategory:(id)a2;
- (void)flushPendingWriteQueueWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
