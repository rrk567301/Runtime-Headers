@class NSString, FMQueueSynchronizer, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FMXPCActivity : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ criteriaBlock;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (weak, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL checkedInAtLeastOnce;
@property (copy, nonatomic) id /* block */ registrationBlock;

- (BOOL)defer;
- (void)unregister;
- (BOOL)shouldDefer;
- (id)getCriteria;
- (void)processCheckin:(id)a0;
- (void)activityHandler:(id)a0;
- (id)initWithName:(id)a0 qos:(unsigned int)a1 criteriaBlock:(id /* block */)a2 handler:(id /* block */)a3;
- (long long)updateCriteriaForActivity:(id)a0;
- (void).cxx_destruct;
- (BOOL)continue;
- (id)_getActivity;
- (void)updateCriteria;
- (void)register;
- (BOOL)done;

@end
