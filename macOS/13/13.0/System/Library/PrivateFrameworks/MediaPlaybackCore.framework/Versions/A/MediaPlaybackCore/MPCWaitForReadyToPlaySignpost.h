@interface MPCWaitForReadyToPlaySignpost : MPCAnalyticsSignpost

+ (void)beginWithIdentifier:(unsigned long long)a0;
+ (void)endWithIdentifier:(unsigned long long)a0 item:(id)a1 machContinuousTime:(unsigned long long)a2;
+ (void)endWithIdentifier:(unsigned long long)a0 error:(id)a1;

@end
