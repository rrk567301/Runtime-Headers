@interface SSADEventReporter : NSObject

+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;
+ (void)reportBadL3Models;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportModelLoadingError;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportKey:(id)a0;
+ (void)reportBadL2Models;

@end
