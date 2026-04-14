@interface EXSLogging : NSObject

+ (unsigned long long)addStateHandlerWithName:(const char *)a0 stateBlock:(id /* block */)a1;
+ (void)removeStateHandler:(unsigned long long)a0;
+ (id)currentQueueLabel;
+ (double)timeIntervalBetweenMachStartTime:(unsigned long long)a0 andMachEndTime:(unsigned long long)a1;

@end
