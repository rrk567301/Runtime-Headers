@class NSNumber;

@interface IMDAttachmentStore : NSObject <RecordStoreDeleting, AssetStoreProviding, RecordStoreProviding>

@property (retain, nonatomic) NSNumber *afterRow;

+ (id)sharedInstance;
+ (void)_askToTapToRadarForErrorString:(id)a0 path:(id)a1;
+ (BOOL)_cloudkitSyncingEnabled;
+ (BOOL)_filesystemIsCaseSensitiveWithPath:(id)a0;
+ (BOOL)fileEligibleForCacheDelete:(id)a0;
+ (BOOL)updateTransferIn:(id)a0 fromGUID:(id)a1 toGUID:(id)a2;

- (void)resetFetchState;
- (id)database;
- (void)markAttachmentPurgeable:(id)a0;
- (BOOL)_updateAttachmentGUID:(id)a0 withGUID:(id)a1;
- (id)fileTransferWithAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { } *)a0;
- (void)_needsToMarkAllAttachmentsAsNeedingSync;
- (id)_recordZoneIDForFilter:(unsigned long long)a0;
- (void)markAttachment:(id)a0 purgeable:(BOOL)a1;
- (BOOL)isSafeToDeleteAttachmentAtPath:(id)a0;
- (void)markFile:(id)a0 asPurgeable:(BOOL)a1;
- (id)_updateAttachmentGUIDIfNeededAndReturnTransfersMarkedWithFailStatus:(id)a0 transfersToSyncRowIDs:(id)a1;
- (id)messageForTransferGUID:(id)a0 shouldLoadAttachments:(BOOL)a1;
- (BOOL)deleteAttachmentsWithGUIDs:(id)a0;
- (BOOL)deleteAttachmentWithGUID:(id)a0;
- (BOOL)deleteAttachmentDataForTransfer:(id)a0;
- (BOOL)updateAttachment:(id)a0 chatGUID:(id)a1 storeAtExternalPath:(BOOL)a2;
- (BOOL)deleteAttachmentsForMessage:(id)a0;
- (long long)_attachmentQueryForFilter:(unsigned long long)a0;
- (BOOL)updateTemporaryTransferGUIDsIfNeeded:(id)a0 transfersToSync:(id)a1;
- (void)_resetAttachmentSyncStateForGUID:(id)a0 newSyncState:(long long)a1;
- (id)_newFileTransferFromIMDAttachmentRecordRef:(struct _IMDAttachmentRecordStruct { } *)a0;
- (void)markTransferAsNotSuccessfullyDownloadedWithGUID:(id)a0;
- (void)deleteAttachmentsDirectWithPredicate:(id)a0;
- (void)_reindexMessageGUIDs:(id)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)resetFetchStateForAssets;
- (id)_permanentTransferGUIDForTransfer:(id)a0 inItem:(id)a1;
- (void)_markTransferAsNotBeingAbleToSyncWithGUID:(id)a0;
- (void)_hasMarkedAllAttachmentsAsNeedingSync;
- (void)clearTombstonesForRecordIDs:(id)a0;
- (BOOL)updateTemporaryTransferGUIDsOn:(id)a0 andUpdateMessageIfNeeded:(id)a1 transfersToSync:(id)a2;
- (id)_alternateAttachmentPathIfExists:(id)a0;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)a0;
- (BOOL)updateAttachment:(id)a0;
- (BOOL)_shouldMarkAllAttachmentsAsNeedingSync;
- (BOOL)removeAttachment:(id)a0 fromMessageWithGUID:(id)a1;
- (void)updateAssetUsingRecord:(id)a0;
- (id)_permanentTransferGUIDForExistingTransferWithTemporaryGUID:(id)a0;
- (BOOL)updateTemporaryTransferGUIDsOnMessageIfNeeded:(id)a0;
- (void)deleteAttachmentSyncToken;
- (id)attachmentWithGUID:(id)a0;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (BOOL)_shouldEarlyReturnForWrongItemType:(id)a0;
- (id)syncTokenStore;
- (void)_markAttachmentWithROWID:(id)a0 withSyncState:(long long)a1;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 error:(id *)a2;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (void)markAllAttachmentsAsNotPurgeable;
- (struct _IMDAttachmentRecordStruct { } *)_loadAttachmentRecordForGUID:(id)a0;
- (void)_markAllFailedAttachmentsAsNeedingSync;
- (void)legacyImport:(id)a0;
- (BOOL)_shouldMarkAttachmentsAsNeedingReupload;
- (BOOL)storeAttachment:(id)a0 associateWithMessageWithGUID:(id)a1 chatGUID:(id)a2 storeAtExternalLocation:(BOOL)a3;
- (id)attachmentsFilteredUsingPredicate:(id)a0 limit:(unsigned long long)a1;
- (BOOL)storeAttachment:(id)a0 associateWithMessageWithGUID:(id)a1;
- (void)resetLocalSyncStateIfAppropriate;
- (void)markAttachmentUnpurgeable:(id)a0;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (id)attachmentsWithGUIDs:(id)a0;
- (id)batchOfRecordsToWriteWithFilter:(unsigned long long)a0 limit:(long long)a1 recurseCount:(int)a2 error:(id *)a3;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)a0 error:(id *)a1;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (id)batchOfRecordsMissingAssetsAfterRow:(id *)a0 withLimit:(long long)a1;

@end
