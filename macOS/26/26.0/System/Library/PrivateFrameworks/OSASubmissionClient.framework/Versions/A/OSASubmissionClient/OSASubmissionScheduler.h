@interface OSASubmissionScheduler : NSObject

+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (long long)_retryCount;
+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)scheduleSubmission;
+ (void)scheduleCleanupForUser:(id)a0;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;
+ (double)_lastSuccessTime;
+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;
+ (void)_saveLastSuccessTime;
+ (void)_resetRetryCount;
+ (void)_incrementRetryCount;

@end
