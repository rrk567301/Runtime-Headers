@interface OSASubmissionScheduler : NSObject

+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)_incrementRetryCount;
+ (void)_resetRetryCount;
+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;
+ (void)_saveLastSuccessTime;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;
+ (double)_lastSuccessTime;
+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (void)scheduleCleanupForUser:(id)a0;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (long long)_retryCount;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;
+ (void)scheduleSubmission;

@end
