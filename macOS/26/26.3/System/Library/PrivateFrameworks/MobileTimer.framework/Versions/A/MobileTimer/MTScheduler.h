@interface MTScheduler : NSObject

+ (id)globalAsyncSchedulerWithPriority:(unsigned int)a0;
+ (id)serialSchedulerWithName:(id)a0;
+ (id)serialSchedulerWithName:(id)a0 priority:(unsigned int)a1;
+ (unsigned int)defaultPriority;
+ (id)serialSchedulerForObject:(id)a0;
+ (id)serialSchedulerForObject:(id)a0 priority:(unsigned int)a1;
+ (id)serialSchedulerWithQueue:(id)a0;

@end
