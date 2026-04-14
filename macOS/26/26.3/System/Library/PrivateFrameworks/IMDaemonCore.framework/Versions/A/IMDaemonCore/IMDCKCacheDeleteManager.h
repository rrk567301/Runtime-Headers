@class NSString, IMPurgedAttachmentHandler;

@interface IMDCKCacheDeleteManager : NSObject <IMPurgedAttachmentHandlerDelegate>

@property (retain, nonatomic) IMPurgedAttachmentHandler *purgedAttachmentHandler;
@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic) BOOL allowsWritingToDisk;
@property (nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace;
@property (nonatomic) BOOL isUsingCentralizedModel;
@property BOOL isUpdatingAttachmentFileSizes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_fileTransfersToDelete:(id)a0;
- (void)updateAttachmentFileSizesWithActivity:(id)a0;
- (id)_ckUtilitiesSharedInstance;
- (id)_cacheDeleteGuidanceDictionaryForRequestedSize:(unsigned long long)a0;
- (void)_postTransferInfoOfDeletedTransfers:(id)a0;
- (long long)purgeableAttachmentSize;
- (void)_fetchTransfersFromCloudKit:(id)a0 withActivity:(id)a1;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)a0 totalTransfers:(id)a1;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)a0 deferred:(BOOL *)a1;
- (id)init;
- (void)registerWithCacheDelete;
- (void)_fetchTransfersFromCloudKit:(id)a0 indexOfTransfers:(unsigned long long)a1 numberOfBatchesToFetch:(unsigned long long)a2 activity:(id)a3 withCompletion:(id /* block */)a4;
- (long long)purgeAttachments:(long long)a0;
- (void)_cacheDeleteSetUp;
- (id)_copyAttachmentRecord:(id)a0;
- (long long)_purgeableSpaceGivenUrgency:(int)a0;
- (id)_getIndexSetForBatch:(id)a0 indexOfTransfers:(unsigned long long)a1;
- (unsigned long long)_indexOfNextBatch:(id)a0 totalTransfers:(id)a1 indexOfTransfers:(unsigned long long)a2;
- (void).cxx_destruct;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)a0;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)a0;
- (id)reportAvailableSpaceToBeDeleted:(id)a0 urgency:(int)a1;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)a0 diskVolume:(id)a1 urgency:(int)a2 requestedSize:(unsigned long long)a3;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)a0 urgency:(int)a1;
- (void)resetAttachmentWatermark;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)a0 urgency:(int)a1;
- (BOOL)isUsingCentralizeCacheDelete;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)a0 urgency:(int)a1;
- (void)batchCompletedWithTransfers:(id)a0;
- (id)_fileTransfersToValidate:(id)a0;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)a0 urgency:(int)a1;
- (void)metricAttachmentsToPurge:(long long)a0 withActivity:(id)a1;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;

@end
