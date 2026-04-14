@interface _TtCC9WidgetKit24WidgetExtensionXPCServer14ExportedObject : NSObject <WidgetKit.HostToExtensionXPCInterface> {
    void /* unknown type, empty encoding */ previewAgent;
    void /* unknown type, empty encoding */ urlHandlers;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getPlaceholdersWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getTimelinesWithRequests:(id)a0 isPreview:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;
- (void)performCleanup;

@end
