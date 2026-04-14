@interface OSASubmissionScheduler : NSObject

+ (void)_scheduleSubmissionWithPermissive:(BOOL)a0;
+ (id)_getCurrentCadenceParametersFromActivity:(id)a0;
+ (void)_incrementRetryCount;
+ (void)scheduleSubmission;
+ (void)scheduleCleanupForUser:(id)a0;
+ (void)_resetRetryCount;
+ (void)createUserSubmissionDirectory:(id)a0;
+ (void)_updateCadenceForActivity:(id)a0 newCadenceParameters:(id)a1;
+ (void)_saveLastSuccessTime;
+ (long long)_retryCount;
+ (void)scheduleCleanupWithHomeDirectory:(id)a0;
+ (double)_lastSuccessTime;
+ (id)_calculateNewCadenceParametersWithPermissive:(BOOL)a0 fastLane:(BOOL)a1;

@end
