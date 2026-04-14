@class HMFTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDThreadCommandTimer : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *commandQueue;
@property (readonly) HMFTimer *commandTimer;
@property long long commandType;
@property unsigned long long commandCount;
@property (copy) id /* block */ commandBlock;
@property (copy) id /* block */ completionForBlock;
@property (readonly) long long currentlyScheduledCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)abort;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)_commandTypeValueToString:(long long)a0;
- (id)initWithQueue:(id)a0 delay:(double)a1;
- (id)initWithQueue:(id)a0 timer:(id)a1;
- (void)startWithCommandType:(long long)a0 block:(id /* block */)a1 completion:(id /* block */)a2;

@end
