@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (id)kernelLQMRollingWindow:(id)a0 withReferenceWindow:(id)a1 andLqmFeatures:(id)a2;
+ (void)initialize;
+ (void)addSample:(id)a0 To:(id)a1;
+ (unsigned long long)parseKernelBlobInto:(id)a0;
+ (BOOL)isOngoing;
+ (void)advanceReadingPointerOf:(unsigned long long)a0;

@end
