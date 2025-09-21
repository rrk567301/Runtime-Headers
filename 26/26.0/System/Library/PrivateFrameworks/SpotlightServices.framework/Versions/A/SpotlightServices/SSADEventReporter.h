@interface SSADEventReporter : NSObject

+ (void)reportBadL2Models;
+ (void)reportBadL3Models;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportModelLoadingError;
+ (void)reportKey:(id)a0;

@end
