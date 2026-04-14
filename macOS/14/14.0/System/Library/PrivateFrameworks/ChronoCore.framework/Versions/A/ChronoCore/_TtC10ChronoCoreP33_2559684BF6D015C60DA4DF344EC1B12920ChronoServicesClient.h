@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject <CHSChronoWidgetServiceServerInterface> {
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ enablementProvider;
    void /* unknown type, empty encoding */ deviceService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ hostService;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ powerlogSuggestionService;
    void /* unknown type, empty encoding */ duetService;
    void /* unknown type, empty encoding */ keepAliveAssertionProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ widgetHostIdentities;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ widgetFetchSubscriptions;
    void /* unknown type, empty encoding */ widgetTimelineLoadSubscriptions;
    void /* unknown type, empty encoding */ widgetTimelineLoadActionResponders;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ serviceAssertionIDs;
    void /* unknown type, empty encoding */ serviceAssertions;
    void /* unknown type, empty encoding */ wantsIntents;
}

- (id)init;
- (void).cxx_destruct;
- (id)allPairedDevices;
- (void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeWidgetHostWithIdentifier:(id)a0;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)a0 reason:(id)a1 error:(id *)a2;
- (void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)a0;
- (void)fetchDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)flushPowerlog;
- (void)pairDeviceWith:(id)a0 completion:(id /* block */)a1;
- (void)performDescriptorDiscoveryForHost:(id)a0;
- (void)reloadDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)reloadRemoteWidgetsWithError:(id *)a0;
- (void)reloadTimeline:(id)a0 error:(id *)a1;
- (BOOL)remoteWidgetsEnabled;
- (void)setActivationState:(id)a0 forWidgetHostWithIdentifier:(id)a1;
- (void)setWidgetConfiguration:(id)a0 activationState:(id)a1 forWidgetHostWithIdentifier:(id)a2;
- (void)subscribeToExtensionsIncludingIntents:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToRelevanceEntries:(id /* block */)a0;
- (void)subscribeToRemoteDevices:(id /* block */)a0;
- (BOOL)toggleRemoteWidgetsEnabled:(id)a0 error:(id *)a1;
- (BOOL)unpairDeviceWith:(id)a0 error:(id *)a1;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;

@end
