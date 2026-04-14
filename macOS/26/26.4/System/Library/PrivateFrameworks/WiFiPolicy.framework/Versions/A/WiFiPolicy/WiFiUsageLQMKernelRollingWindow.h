@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (void)initialize;
+ (id)kernelLQMRollingWindow:(id)a0 withReferenceWindow:(id)a1 andLqmFeatures:(id)a2;
+ (void)advanceReadingPointerOf:(unsigned long long)a0;
+ (unsigned long long)parseKernelBlobInto:(id)a0;
+ (BOOL)isOngoing;
+ (void)addSample:(id)a0 To:(id)a1;

@end
