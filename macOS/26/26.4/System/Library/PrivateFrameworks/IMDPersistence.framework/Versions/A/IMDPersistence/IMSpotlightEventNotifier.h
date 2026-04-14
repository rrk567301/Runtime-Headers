@interface IMSpotlightEventNotifier : NSObject

+ (id)sharedNotifier;

- (id)_displayStringForReason:(long long)a0;
- (id)_formatDate:(id)a0;
- (void)_presentNotificationWithMessage:(id)a0 newState:(id)a1 verbose:(BOOL)a2;
- (void)deferredReindexScheduled;
- (void)reindexInitiatedWithTotalMessages:(long long)a0 reason:(long long)a1;
- (void)reindexSuspendedUntilDate:(id)a0 withError:(id)a1;

@end
