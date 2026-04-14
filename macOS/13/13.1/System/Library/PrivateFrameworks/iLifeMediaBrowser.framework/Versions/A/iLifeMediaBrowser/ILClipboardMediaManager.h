@interface ILClipboardMediaManager : ILMediaManager

+ (id)clipboardPlugin;
+ (id)sharedClipboardManager;
+ (void)releaseSharedClipboardManager;

- (id)init;
- (id)bundleIdentifier;
- (id)contextMenuForMediaGroup:(id)a0;
- (id)rootMediaGroupTitle;
- (id)rootMediaGroupIcon;
- (id)performLoadData;
- (unsigned long long)mediaTypesSupported;
- (id)contextMenuForMediaObject:(id)a0 inMediaGroup:(id)a1;
- (void)contextualMenuRemoveMediaObject:(id)a0;
- (void)contextualMenuRemoveClipboard:(id)a0;
- (id)createClipboard;
- (void)createClipboardWithMediaObjects:(id)a0;
- (void)addFilePaths:(id)a0 toMediaGroup:(id)a1;
- (void)createClipboardWithFilePaths:(id)a0;
- (void)changeNameOfClipboard:(id)a0 to:(id)a1;
- (id)createMediaObjectsForPaths:(id)a0;
- (void)removeClipboard:(id)a0;
- (void)removeMediaObject:(id)a0 fromClipboard:(id)a1;
- (void)refreshClipboard:(id)a0;
- (void)renameClipboard:(id)a0 toName:(id)a1;
- (id)createDefaultClipboardName;
- (void)writeClipboardToDisk;
- (void)readClipboardFromDisk;

@end
