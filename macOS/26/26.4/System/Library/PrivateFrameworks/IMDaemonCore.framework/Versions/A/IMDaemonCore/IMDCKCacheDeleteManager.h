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

- (void)_cacheDeleteSetUp;
- (id)_copyAttachmentRecord:(id)a0;
- (void)_postTransferInfoOfDeletedTransfers:(id)a0;
- (id)_getIndexSetForBatch:(id)a0 indexOfTransfers:(unsigned long long)a1;
- (id)_cacheDeleteGuidanceDictionaryForRequestedSize:(unsigned long long)a0;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)a0 urgency:(int)a1;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)a0 urgency:(int)a1;
- (void)metricAttachmentsToPurge:(long long)a0 withActivity:(id)a1;
- (void)batchCompletedWithTransfers:(id)a0;
- (void)_fetchTransfersFromCloudKit:(id)a0 withActivity:(id)a1;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)a0 urgency:(int)a1;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)a0;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (long long)purgeAttachments:(long long)a0;
- (void)registerWithCacheDelete;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)a0 diskVolume:(id)a1 urgency:(int)a2 requestedSize:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)_fileTransfersToValidate:(id)a0;
- (void)resetAttachmentWatermark;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)a0 deferred:(BOOL *)a1;
- (long long)_purgeableSpaceGivenUrgency:(int)a0;
- (id)init;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)a0 urgency:(int)a1;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (void)_fetchTransfersFromCloudKit:(id)a0 indexOfTransfers:(unsigned long long)a1 numberOfBatchesToFetch:(unsigned long long)a2 activity:(id)a3 withCompletion:(id /* block */)a4;
- (unsigned long long)_indexOfNextBatch:(id)a0 totalTransfers:(id)a1 indexOfTransfers:(unsigned long long)a2;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)a0 totalTransfers:(id)a1;
- (BOOL)isUsingCentralizeCacheDelete;
- (id)_ckUtilitiesSharedInstance;
- (id)_fileTransfersToDelete:(id)a0;
- (id)reportAvailableSpaceToBeDeleted:(id)a0 urgency:(int)a1;
- (void)updateAttachmentFileSizesWithActivity:(id)a0;
- (long long)purgeableAttachmentSize;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)a0;

@end
