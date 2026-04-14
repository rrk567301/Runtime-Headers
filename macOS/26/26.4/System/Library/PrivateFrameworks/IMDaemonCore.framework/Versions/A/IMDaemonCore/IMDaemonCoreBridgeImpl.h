@interface IMDaemonCoreBridgeImpl : NSObject

+ (void)updateTransfer:(id)a0;
+ (void)addTransfer:(id)a0 forGUID:(id)a1;
+ (void)updateChatUsingSyncData:(id)a0;
+ (void)updateStamp;
+ (void)addParentChatID:(id)a0 toChat:(id)a1 service:(id)a2;
+ (BOOL)isExpectedChatIDForItem:(id)a0 chatID:(id)a1;
+ (void)addItem:(id)a0 toParentChatID:(id)a1 updatedLastMessageCount:(unsigned long long)a2;
+ (id)ckRecordWithT1Info:(id)a0;
+ (id)ckRecordWithT2Info:(id)a0;
+ (id)ckRecordWithT3Info:(id)a0;
+ (id)createMessageItemWithRecordRef:(struct _IMDMessageRecordStruct { } *)a0 handle:(id)a1;
+ (id)fileTransferForGUID:(id)a0;
+ (id)fileTransferWithGUID:(id)a0;
+ (void)generatePreviewForTransfer:(id)a0;
+ (void)handleMessageUpdateWithCKRecord:(id)a0;
+ (BOOL)hasFinishedAssetDownloadSync;
+ (BOOL)isBackwardCompatibilityForItem:(id)a0 parentChatID:(id)a1;
+ (BOOL)isCompatibleWithMiCForItem:(id)a0;
+ (BOOL)isRecoverablyDeletedMessageGUID:(id)a0;
+ (void)moveMessagePartForGUID:(id)a0 deleteDate:(id)a1 partBody:(id)a2;
+ (id)primaryAccountCountryCode;
+ (BOOL)registerGuid:(id)a0 forLocalURL:(id)a1;
+ (void)reloadDatabase;
+ (void)removeTransferFromBackup:(id)a0;
+ (void)setSortIDForItem:(id)a0 parentChatID:(id)a1;
+ (BOOL)shouldStoreMessageForItem:(id)a0;
+ (BOOL)storeAttachmentWithTransfer:(id)a0 withChatGUID:(id)a1;
+ (void)storeAttachmentWithTransfer:(id)a0 withMessageGUID:(id)a1;
+ (void)storeAttachmentsForMessage:(id)a0;
+ (void)updateTemporaryTransferGUIDsIfNeeded:(id)a0;

@end
