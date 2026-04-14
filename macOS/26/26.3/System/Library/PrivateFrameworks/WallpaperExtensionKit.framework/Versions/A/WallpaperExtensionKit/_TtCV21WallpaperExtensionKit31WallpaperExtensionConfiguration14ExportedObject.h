@interface _TtCV21WallpaperExtensionKit31WallpaperExtensionConfiguration14ExportedObject : NSObject <WallpaperExtensionKit.WallpaperExtensionXPCProtocol> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (void)migrateSelectedChoiceFor:(id)a0 reply:(id /* block */)a1;
- (void)acquireWithId:(id)a0 request:(id)a1 reply:(id /* block */)a2;
- (void)addChoiceRequestWithChoiceRequest:(id)a0 onBehalfOfProcess:(id)a1 reply:(id /* block */)a2;
- (void)canSkipShuffledContentWithId:(id)a0 reply:(id /* block */)a1;
- (void)cancelDownloadFor:(id)a0 reply:(id /* block */)a1;
- (id)downloadWithChoiceID:(id)a0 reply:(id /* block */)a1;
- (void)handleDebugRequestFor:(id)a0 reply:(id /* block */)a1;
- (void)handleNotificationWithNamed:(id)a0 reply:(id /* block */)a1;
- (void)invalidateWithId:(id)a0 reply:(id /* block */)a1;
- (void)invokeContextMenuActionWithMenuItemID:(id)a0 groupItemID:(id)a1 reply:(id /* block */)a2;
- (void)isChoiceDownloadedWith:(id)a0 reply:(id /* block */)a1;
- (void)migrateFrom:(id)a0 to:(id)a1 reply:(id /* block */)a2;
- (void)pauseDownloadFor:(id)a0 reply:(id /* block */)a1;
- (void)provideSettingsViewModelsWithContentTypes:(id)a0 reply:(id /* block */)a1;
- (void)removeChoiceRequestWithChoiceRequest:(id)a0 reply:(id /* block */)a1;
- (void)removeDownloadFor:(id)a0 reply:(id /* block */)a1;
- (void)resumeDownloadFor:(id)a0 reply:(id /* block */)a1;
- (void)selectedChoicesDidChangeFor:(id)a0 reply:(id /* block */)a1;
- (void)skipShuffledContentWithId:(id)a0 reply:(id /* block */)a1;
- (void)snapshotWithId:(id)a0 reply:(id /* block */)a1;
- (void)updateWithId:(id)a0 request:(id)a1 reply:(id /* block */)a2;

@end
