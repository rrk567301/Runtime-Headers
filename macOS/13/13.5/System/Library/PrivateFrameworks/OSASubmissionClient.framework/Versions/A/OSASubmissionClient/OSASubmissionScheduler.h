@interface OSASubmissionScheduler : NSObject

+ (long long)_retryCount;
+ (void)_setRetryCount:(long long)a0;
+ (double)_lastSuccessTime;
+ (void)_saveLastSuccessTime;
+ (void)_scheduleSubmissionPermissive:(BOOL)a0;
+ (void)_setCadenceForActivity:(id)a0;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (void)scheduleSubmission;

@end
