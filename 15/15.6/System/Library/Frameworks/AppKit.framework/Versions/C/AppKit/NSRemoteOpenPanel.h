@interface NSRemoteOpenPanel : NSRemoteSavePanel

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)URLs;
- (void)setAccessoryViewDisclosed:(char)a0;
- (char)resolvesAliases;
- (char)_allowsRootLayerBacking;
- (void)_dismissModalForTerminate;
- (id)_hideAccessoryViewButtonTitle;
- (void)_registerKVOWithViewBridgeService:(id)a0 onBridge:(id)a1;
- (char)_saveMode;
- (id)_showAccessoryViewButtonTitle;
- (void)_unregisterKVOWithViewBridgeService:(id)a0 onBridge:(id)a1;
- (char)allowsMultipleSelection;
- (char)canChooseDirectories;
- (char)canChooseFiles;
- (char)canDownloadUbiquitousContents;
- (char)canResolveUbiquitousConflicts;
- (char)finderViewSelectedURLsCanIncludeItemsNeedingDownload:(id)a0;
- (char)isAccessoryViewDisclosed;
- (id)makeTouchBar;
- (void)newDocument:(id)a0;
- (char)preventsApplicationTerminationWhenModal;
- (void)setAllowsMultipleSelection:(char)a0;
- (void)setCanChooseDirectories:(char)a0;
- (void)setCanChooseFiles:(char)a0;
- (void)setCanDownloadUbiquitousContents:(char)a0;
- (void)setCanResolveUbiquitousConflicts:(char)a0;
- (void)setResolvesAliases:(char)a0;

@end
