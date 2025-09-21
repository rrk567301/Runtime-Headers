@interface NSLocalOpenPanel : NSLocalSavePanel

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)filenames;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (BOOL)allowsMultipleSelection;
- (id)URLs;
- (void)setAccessoryViewDisclosed:(BOOL)a0;
- (BOOL)resolvesAliases;
- (BOOL)_allowsRootLayerBacking;
- (void)_dismissModalForTerminate;
- (id)_hideAccessoryViewButtonTitle;
- (BOOL)_saveMode;
- (id)_showAccessoryViewButtonTitle;
- (BOOL)canChooseDirectories;
- (BOOL)canChooseFiles;
- (BOOL)canDownloadUbiquitousContents;
- (BOOL)canResolveUbiquitousConflicts;
- (BOOL)finderViewSelectedURLsCanIncludeItemsNeedingDownload:(id)a0;
- (BOOL)isAccessoryViewDisclosed;
- (id)makeTouchBar;
- (void)newDocument:(id)a0;
- (BOOL)preventsApplicationTerminationWhenModal;
- (void)setCanChooseDirectories:(BOOL)a0;
- (void)setCanChooseFiles:(BOOL)a0;
- (void)setCanDownloadUbiquitousContents:(BOOL)a0;
- (void)setCanResolveUbiquitousConflicts:(BOOL)a0;
- (void)setResolvesAliases:(BOOL)a0;

@end
