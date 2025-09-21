@interface IMDPersistentAttachmentController : NSObject

+ (id)sharedInstance;

- (char)_canDeleteAttachmentPath:(id)a0;
- (char)_deleteAttachmentForTransfer:(id)a0 highQuality:(char)a1;
- (id)_migrateSiblingAssetsInAttachmentStoreWithOriginalPath:(id)a0 destinationPath:(id)a1 withFileManager:(id)a2;
- (id)_persistentPathForTransfer:(id)a0 filename:(id)a1 highQuality:(char)a2 chatGUID:(id)a3 storeAtExternalPath:(char)a4;
- (void)_removeLegacyAttachmentPathsInAttachmentStoreWithOriginalPath:(id)a0 withFileManager:(id)a1;
- (id)_saveAttachmentForTransfer:(id)a0 highQuality:(char)a1 copyWithinAttachmentStore:(char)a2;
- (id)_saveAttachmentForTransfer:(id)a0 highQuality:(char)a1 copyWithinAttachmentStore:(char)a2 chatGUID:(id)a3 storeAtExternalPath:(char)a4;
- (char)_shouldDeleteOriginalPath:(id)a0 copyWithinAttachmentStore:(char)a1 destPath:(id)a2 storeAtExternalPath:(char)a3;
- (char)cleanseOrphanedFileTransfers;
- (char)deleteAttachmentsForTransfer:(id)a0;
- (char)isSafeToDeleteAttachmentPath:(id)a0;
- (void)moveAttachmentsForTransfer:(id)a0 completion:(id /* block */)a1;
- (void)saveAttachmentsForTransfer:(id)a0 chatGUID:(id)a1 storeAtExternalLocation:(char)a2 completion:(id /* block */)a3;
- (void)saveAttachmentsForTransfer:(id)a0 completion:(id /* block */)a1;

@end
