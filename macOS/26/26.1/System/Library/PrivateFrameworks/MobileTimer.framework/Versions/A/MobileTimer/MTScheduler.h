@interface MTScheduler : NSObject

+ (id)serialSchedulerWithName:(id)a0 priority:(unsigned int)a1;
+ (id)serialSchedulerWithQueue:(id)a0;
+ (unsigned int)defaultPriority;
+ (id)serialSchedulerForObject:(id)a0;
+ (id)serialSchedulerWithName:(id)a0;
+ (id)serialSchedulerForObject:(id)a0 priority:(unsigned int)a1;
+ (id)globalAsyncSchedulerWithPriority:(unsigned int)a0;

@end
