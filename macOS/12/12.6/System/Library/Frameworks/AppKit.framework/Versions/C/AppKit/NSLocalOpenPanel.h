@interface NSLocalOpenPanel : NSLocalSavePanel {
    char _reservedOpenPanel[4];
    void *_privateOpenPanel;
}

- (id)URLs;
- (void)setAccessoryViewDisclosed:(BOOL)a0;
- (void)_dismissModalForTerminate;
- (void)newDocument:(id)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (BOOL)allowsMultipleSelection;
- (id)makeTouchBar;
- (void)setCanChooseFiles:(BOOL)a0;
- (void)setCanChooseDirectories:(BOOL)a0;
- (void)setCanResolveUbiquitousConflicts:(BOOL)a0;
- (id)filenames;
- (BOOL)resolvesAliases;
- (void)setResolvesAliases:(BOOL)a0;
- (BOOL)canChooseDirectories;
- (BOOL)canChooseFiles;
- (BOOL)canResolveUbiquitousConflicts;
- (BOOL)canDownloadUbiquitousContents;
- (void)setCanDownloadUbiquitousContents:(BOOL)a0;
- (void)_initSaveMode;
- (BOOL)finderViewSelectedURLsCanIncludeItemsNeedingDownload:(id)a0;
- (BOOL)preventsApplicationTerminationWhenModal;
- (BOOL)isAccessoryViewDisclosed;
- (void)_changeOptionsButtonTitleIfNecessary;
- (BOOL)_allowsRootLayerBacking;
- (void)_registerKVOWithViewBridgeService:(id)a0 onBridge:(id)a1;
- (void)_unregisterKVOWithViewBridgeService:(id)a0 onBridge:(id)a1;

@end
