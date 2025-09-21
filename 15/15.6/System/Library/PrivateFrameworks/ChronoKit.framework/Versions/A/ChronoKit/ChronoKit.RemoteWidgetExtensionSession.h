@interface ChronoKit.RemoteWidgetExtensionSession : _TtCs12_SwiftObject <WidgetKit.WidgetExtensionSession> {
    void /* unknown type, empty encoding */ extensionIdentity;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ dataProtectionLevel;
    void /* unknown type, empty encoding */ protectedDescriptors;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loggingIdentifier;
}

- (void)invalidate;
- (void)pushTokensDidChange:(id)a0 completion:(id /* block */)a1;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)a0;
- (void)getControlTemplatesWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getDescriptorsWithCompletion:(id /* block */)a0;
- (void)getPlaceholdersForRequests:(id)a0 inEnvironment:(id)a1 completion:(id /* block */)a2;
- (void)getPlaceholdersWithEnvironment:(id)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)getPlaceholdersWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getTimelineFor:(id)a0 into:(id)a1 environment:(id)a2 isPreview:(char)a3 completion:(id /* block */)a4;
- (void)getTimelinesWithRequests:(id)a0 isPreview:(char)a1 completion:(id /* block */)a2;
- (void)getWidgetRelevancesWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;
- (void)setControlState:(id)a0 completion:(id /* block */)a1;

@end
