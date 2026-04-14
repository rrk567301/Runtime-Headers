@interface NSLocalOpenPanel : NSLocalSavePanel

- (void)setAccessoryViewDisclosed:(BOOL)a0;
- (id)URLs;
- (void)newDocument:(id)a0;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (id)makeTouchBar;
- (void)_dismissModalForTerminate;
- (id)filenames;
- (BOOL)resolvesAliases;
- (void)setResolvesAliases:(BOOL)a0;
- (BOOL)canChooseDirectories;
- (void)setCanChooseDirectories:(BOOL)a0;
- (BOOL)canChooseFiles;
- (void)setCanChooseFiles:(BOOL)a0;
- (BOOL)canResolveUbiquitousConflicts;
- (void)setCanResolveUbiquitousConflicts:(BOOL)a0;
- (BOOL)canDownloadUbiquitousContents;
- (void)setCanDownloadUbiquitousContents:(BOOL)a0;
- (void)_initSaveMode;
- (BOOL)finderViewSelectedURLsCanIncludeItemsNeedingDownload:(id)a0;
- (BOOL)preventsApplicationTerminationWhenModal;
- (BOOL)isAccessoryViewDisclosed;
- (id)_hideAccessoryViewButtonTitle;
- (id)_showAccessoryViewButtonTitle;
- (BOOL)_allowsRootLayerBacking;
- (void)_registerKVOWithViewBridgeService:(id)a0 onBridge:(id)a1;
- (void)_unregisterKVOWithViewBridgeService:(id)a0 onBridge:(id)a1;

@end
