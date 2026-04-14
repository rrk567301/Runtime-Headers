@interface IMDCKCacheDeleteManager : NSObject

@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic) BOOL allowsWritingToDisk;
@property (nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace;
@property (nonatomic) BOOL isUsingCentralizedModel;
@property BOOL isUpdatingAttachmentFileSizes;

+ (id)sharedInstance;

- (id)init;
- (long long)purgeAttachments:(long long)a0;
- (id)_ckUtilitiesSharedInstance;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)a0;
- (void)updateAttachmentFileSizesWithActivity:(id)a0;
- (void)registerWithCacheDelete;
- (void)_cacheDeleteSetUp;
- (void)resetAttachmentWatermark;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)a0 diskVolume:(id)a1 urgency:(int)a2 requestedSize:(unsigned long long)a3;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (id)reportAvailableSpaceToBeDeleted:(id)a0 urgency:(int)a1;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)a0 urgency:(int)a1;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)a0 urgency:(int)a1;
- (id)_copyAttachmentRecord:(id)a0;
- (long long)_purgeableSpaceGivenUrgency:(int)a0;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)a0;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)a0 urgency:(int)a1;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)a0 urgency:(int)a1;
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)a0;
- (BOOL)isUsingCentralizeCacheDelete;
- (long long)purgeableAttachmentSize;
- (id)_fileTransfersToDelete:(id)a0;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)a0;
- (void)_postTransferInfoOfDeletedTransfers:(id)a0;
- (void)metricAttachmentsToPurge:(long long)a0 withActivity:(id)a1;
- (id)_fileTransfersToValidate:(id)a0;
- (void)_fetchTransfersFromCloudKit:(id)a0 withActivity:(id)a1;
- (id)_getIndexSetForBatch:(id)a0 indexOfTransfers:(unsigned long long)a1;
- (unsigned long long)_indexOfNextBatch:(id)a0 totalTransfers:(id)a1 indexOfTransfers:(unsigned long long)a2;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)a0 totalTransfers:(id)a1;
- (void)_fetchTransfersFromCloudKit:(id)a0 indexOfTransfers:(unsigned long long)a1 numberOfBatchesToFetch:(unsigned long long)a2 activity:(id)a3 withCompletion:(id /* block */)a4;

@end
