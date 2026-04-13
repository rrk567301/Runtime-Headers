@interface ILClipboardMediaManager : ILMediaManager

+ (id)clipboardPlugin;
+ (id)sharedClipboardManager;
+ (void)releaseSharedClipboardManager;

- (id)init;
- (id)bundleIdentifier;
- (id)rootMediaGroupIcon;
- (id)contextMenuForMediaGroup:(id)a0;
- (id)contextMenuForMediaObject:(id)a0 inMediaGroup:(id)a1;
- (id)performLoadData;
- (id)rootMediaGroupTitle;
- (unsigned long long)mediaTypesSupported;
- (void)readClipboardFromDisk;
- (id)createDefaultClipboardName;
- (id)createClipboard;
- (void)refreshClipboard:(id)a0;
- (id)createMediaObjectsForPaths:(id)a0;
- (void)writeClipboardToDisk;
- (void)contextualMenuRemoveMediaObject:(id)a0;
- (void)contextualMenuRemoveClipboard:(id)a0;
- (void)removeClipboard:(id)a0;
- (void)removeMediaObject:(id)a0 fromClipboard:(id)a1;
- (void)createClipboardWithMediaObjects:(id)a0;
- (void)addFilePaths:(id)a0 toMediaGroup:(id)a1;
- (void)createClipboardWithFilePaths:(id)a0;
- (void)changeNameOfClipboard:(id)a0 to:(id)a1;
- (void)renameClipboard:(id)a0 toName:(id)a1;

@end
