@interface CHPowerLogging : NSObject

+ (void)logModelLoaded:(unsigned long long)a0;
+ (void)logModelInference:(unsigned long long)a0 startTimestamp:(double)a1 endTimestamp:(double)a2 data:(id)a3;
+ (void)logModelUnloaded:(unsigned long long)a0;

@end
