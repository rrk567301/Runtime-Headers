@interface OSASubmissionScheduler : NSObject

+ (void)_saveLastSuccessTime;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;
+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;
+ (void)_incrementRetryCount;
+ (void)scheduleSubmission;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)scheduleCleanupForUser:(id)a0;
+ (long long)_retryCount;
+ (void)_resetRetryCount;
+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;
+ (double)_lastSuccessTime;

@end
