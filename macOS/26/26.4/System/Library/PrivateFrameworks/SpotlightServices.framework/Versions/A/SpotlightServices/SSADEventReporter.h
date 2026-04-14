@interface SSADEventReporter : NSObject

+ (void)reportModelLoadingError;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportBadL3Models;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportBadL2Models;
+ (void)reportKey:(id)a0;

@end
