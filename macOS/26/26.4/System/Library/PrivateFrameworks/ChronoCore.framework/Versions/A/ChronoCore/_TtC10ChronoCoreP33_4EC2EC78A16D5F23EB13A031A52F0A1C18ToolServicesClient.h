@class NSData, NSError;

@interface _TtC10ChronoCoreP33_4EC2EC78A16D5F23EB13A031A52F0A1C18ToolServicesClient : NSObject <CHSToolServiceServerInterface> {
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_taskServiceSubscriptionAssertion;
}

- (void).cxx_destruct;
- (id)init;
- (void)allCachedSnapshotURLsWithCompletion:(id /* block */)a0;
- (void)contentURLForActivityID:(id)a0 completion:(id /* block */)a1;
- (void)expireLocationGracePeriods;
- (void)extensionInfoForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)extensionInfoWithCompletion:(id /* block */)a0;
- (void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)fetchWidgetSceneInfoWithCompletion:(void (^)(NSData *, NSError *))a0;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (void)refreshDescriptorsForExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)reloadControlsOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)reloadTimelinesOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)resetCaches:(id)a0 completion:(id /* block */)a1;
- (void)runReaper:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToTaskServiceStateWithCompletion:(id /* block */)a0;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (void)widgetsWithTimelines:(id /* block */)a0;

@end
