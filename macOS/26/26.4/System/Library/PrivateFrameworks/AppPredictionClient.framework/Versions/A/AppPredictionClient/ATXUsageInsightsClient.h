@class NSXPCConnection;

@interface ATXUsageInsightsClient : NSObject <ATXUsageInsightsInterface> {
    NSXPCConnection *_xpcConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)fetchAllContinuousUsageSessionsWithCompletion:(id /* block */)a0;
- (void)fetchAllDeliveredNotificationsWithCompletion:(id /* block */)a0;
- (void)fetchAllInterruptingAppSessionsWithCompletion:(id /* block */)a0;
- (void)fetchAllMindlessCyclingSessionsWithCompletion:(id /* block */)a0;
- (void)fetchAllPhubbingSessionsWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedBundleIDsForAllowListForAllModesWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedBundleIDsForDenyListForAllModesWithCompletion:(id /* block */)a0;
- (void)fetchUsageInsightsInferredATXModeEventsWithCompletion:(id /* block */)a0;

@end
