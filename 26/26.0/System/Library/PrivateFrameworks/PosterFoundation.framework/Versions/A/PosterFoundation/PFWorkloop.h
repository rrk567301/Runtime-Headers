@class NSObject;
@protocol OS_dispatch_workloop;

@interface PFWorkloop : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_workloop> *sharedWorkloop;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_workloop> *snapshotWorkloop;

+ (id)serialQueueTargetingSharedWorkloop:(id)a0;
+ (id)serialQueueTargetingSharedWorkloop:(id)a0 withQoS:(unsigned int)a1;
+ (id)concurrentQueueTargetingWorkloop:(id)a0 label:(id)a1 withQoS:(unsigned int)a2;
+ (id)serialQueueTargetingWorkloop:(id)a0 label:(id)a1 withQoS:(unsigned int)a2;

@end
