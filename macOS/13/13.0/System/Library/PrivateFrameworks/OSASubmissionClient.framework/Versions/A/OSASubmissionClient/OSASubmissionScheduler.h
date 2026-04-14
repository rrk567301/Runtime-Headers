@interface OSASubmissionScheduler : NSObject

+ (long long)_retryCount;
+ (void)scheduleSubmission;
+ (void)_scheduleSubmissionPermissive:(BOOL)a0;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)_setCadenceForActivity:(id)a0;
+ (void)_saveLastSuccessTime;
+ (double)_lastSuccessTime;
+ (void)_setRetryCount:(long long)a0;

@end
