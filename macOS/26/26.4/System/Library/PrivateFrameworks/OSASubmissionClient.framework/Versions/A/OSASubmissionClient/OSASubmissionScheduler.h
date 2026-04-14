@interface OSASubmissionScheduler : NSObject

+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (void)scheduleSubmission;
+ (void)_incrementRetryCount;
+ (long long)_retryCount;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;
+ (double)_lastSuccessTime;
+ (void)_resetRetryCount;
+ (void)_saveLastSuccessTime;
+ (void)scheduleCleanupForUser:(id)a0;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;

@end
