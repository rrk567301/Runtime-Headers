@interface DESCoreAnalyticsEventManager : DESEventManager

+ (void)_sendCoreAnalyticsEvent:(id)a0 eventPayloadBuilder:(id /* block */)a1;
+ (void)sendEventActivityShouldDeferWithActivityID:(id)a0 connectionDuration:(float)a1;
+ (void)sendEventAttachmentDownloadsBundleID:(id)a0 duration:(float)a1 success:(char)a2 downloadedAttachmentCount:(unsigned long long)a3;
+ (void)sendEventDeferForBundleID:(id)a0 deadlineStr:(id)a1;
+ (void)sendEventDeleteRecordForBundleID:(id)a0 removedCount:(unsigned long long)a1;
+ (void)sendEventErrorForBundleID:(id)a0 error:(id)a1;
+ (void)sendEventEvaluationCompletedForBundleID:(id)a0 duration:(float)a1 deferralTime:(float)a2 wasDeferred:(char)a3 success:(char)a4 error:(id)a5;
+ (void)sendEventEvaluationForBundleID:(id)a0 evaluationID:(id)a1 duration:(float)a2 deferred:(char)a3 success:(char)a4 error:(id)a5 downloadedAttachmentCount:(unsigned long long)a6;
+ (void)sendEventEvaluationSessionFinishForBundleID:(id)a0 success:(char)a1;
+ (void)sendEventEvaluationSessionStartForBundleID:(id)a0;
+ (void)sendEventFetchPolicyForBundleID:(id)a0 success:(char)a1;
+ (void)sendEventMaintenanceWithActivityID:(id)a0 intervalSincePostedEvent:(double)a1 shouldSkip:(char)a2 lockState:(int)a3;
+ (void)sendEventRecipeExpiredForBundleID:(id)a0 deferralTime:(float)a1;
+ (void)sendEventRecipeFetchedForBundleID:(id)a0 evaluationID:(id)a1 error:(id)a2;
+ (void)sendEventRecordsMatchedForBundleID:(id)a0;
+ (void)sendEventWriteRecordForBundleID:(id)a0;

@end
