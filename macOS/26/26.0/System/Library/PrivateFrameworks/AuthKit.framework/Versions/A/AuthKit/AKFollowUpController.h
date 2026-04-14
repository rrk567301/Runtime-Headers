@class NSString, FLFollowUpController;

@interface AKFollowUpController : NSObject <AKFollowUpProvider> {
    FLFollowUpController *_followupController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)followUpPostAnalyticsInfoWithIdentifier:(id)a0 telemetryFlowID:(id)a1 error:(id)a2;

- (BOOL)clearNotificationsForItem:(id)a0 error:(id *)a1;
- (BOOL)clearNotificationsForItem:(id)a0 telemetryFlowID:(id)a1 error:(id *)a2;
- (id)initWithFLFollowupController:(id)a0;
- (BOOL)removeFollowUpItemsWithIdentifiers:(id)a0 telemetryFlowID:(id)a1 error:(id *)a2;
- (void)sendEventForFollowUpWithError:(id)a0 eventName:(id)a1 success:(BOOL)a2 telemetryFlowID:(id)a3 error:(id *)a4;
- (BOOL)removeFollowUpItems:(id)a0 telemetryFlowID:(id)a1 error:(id *)a2;
- (BOOL)addFollowUpItems:(id)a0 telemetryFlowID:(id)a1 error:(id *)a2;
- (BOOL)removeFollowUpItems:(id)a0 error:(id *)a1;
- (BOOL)removeAllFollowUpItems:(id *)a0 telemetryFlowID:(id)a1;
- (BOOL)removeAllFollowUpItems:(id *)a0;
- (BOOL)removeFollowUpItemsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)pendingFollowUpItems:(id *)a0;
- (BOOL)addFollowUpItems:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
