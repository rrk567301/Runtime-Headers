@interface PPSocialHighlightMetrics : NSObject

+ (id)iMessageBucketDescriptionWithShouldContinueBlock:(id /* block */)a0;
+ (void)registerExpiredLinkReview;
+ (id)logExpiredLinkStatsWithHighlights:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)countIMessagesSentInPastWeekWithShouldContinueBlock:(id /* block */)a0;
+ (id)_countSentMessagesInLastWeekMatchingChatType:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)sendLinkExpiredMessagesForFeedbackCountsByHighlightId:(id)a0 tvFeedbackCountsByHighlightId:(id)a1 highlights:(id)a2;
+ (void)logMatchedFeedbackForHighlightMatches:(id)a0 batchSize:(unsigned long long)a1 type:(int)a2 client:(id)a3;
+ (id)feedbackTypeCountsByHighlightIdentifierInInterval:(double)a0 forTVOS:(BOOL)a1;
+ (void)logFeedbackForHighlight:(id)a0 type:(unsigned long long)a1 client:(id)a2;
+ (void)logMetricsForExpiringFeedback:(id)a0;
+ (void)registerCTSDataCollection;
+ (void)registerCountLinks;
+ (void)registerLogConsumedByClient;
+ (void)logFeedbackForAttribution:(id)a0 type:(unsigned long long)a1 client:(id)a2;
+ (void)registerClientLinkStatus;
+ (id)countSMSSentInPastWeekWithShouldContinueBlock:(id /* block */)a0;
+ (void)registerDeviceSettingsCollection;
+ (id)SMSBucketDescriptionWithShouldContinueBlock:(id /* block */)a0;
+ (void)registerSampledUnsupportedClientLogging;
+ (unsigned long long)countAllLinksReceivedInMessages;
+ (void)_recordTipsContentEvent:(id)a0;
+ (void)logLinkExpiredMetricsForHighlight:(id)a0 feedbackCountsByClient:(id)a1 forTVOS:(BOOL)a2;
+ (id)highlightsReceivedInInterval:(double)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)hasSentSMSWithShouldContinueBlock:(id /* block */)a0;
+ (id)hasSentIMessageWithShouldContinueBlock:(id /* block */)a0;
+ (double)hoursFromSeconds:(double)a0;
+ (id)unsupportedClientsFromPastDayWithShouldContinueBlock:(id /* block */)a0;
+ (id)_loggableToggleStatus:(unsigned char)a0;
+ (void)logConsumptionByClientWithShouldContinueBlock:(id /* block */)a0;
+ (id)allHighlightIdentifiersReceivedWithShouldContinueBlock:(id /* block */)a0;
+ (BOOL)_queryLinksWithFetchAttributes:(id)a0 interval:(double)a1 handler:(id /* block */)a2;

@end
