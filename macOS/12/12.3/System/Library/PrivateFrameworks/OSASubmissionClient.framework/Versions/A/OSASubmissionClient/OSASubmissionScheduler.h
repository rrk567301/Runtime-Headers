@interface OSASubmissionScheduler : NSObject

+ (long long)_retryCount;
+ (void)_scheduleSubmissionPermissive:(BOOL)a0;
+ (void)_setCadenceForActivity:(id)a0;
+ (double)_lastSuccessTime;
+ (void)_saveLastSuccessTime;
+ (void)_setRetryCount:(long long)a0;
+ (void)scheduleSubmission;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;

@end
