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

- (BOOL)isUsingCentralizeCacheDelete;
- (void)_postTransferInfoOfDeletedTransfers:(id)a0;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)a0;
- (id)_fileTransfersToDelete:(id)a0;
- (void)_fetchTransfersFromCloudKit:(id)a0 withActivity:(id)a1;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)a0 urgency:(int)a1;
- (id)reportAvailableSpaceToBeDeleted:(id)a0 urgency:(int)a1;
- (long long)purgeableAttachmentSize;
- (void)updateAttachmentFileSizesWithActivity:(id)a0;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)a0 urgency:(int)a1;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (void)_fetchTransfersFromCloudKit:(id)a0 indexOfTransfers:(unsigned long long)a1 numberOfBatchesToFetch:(unsigned long long)a2 activity:(id)a3 withCompletion:(id /* block */)a4;
- (void)registerWithCacheDelete;
- (unsigned long long)_indexOfNextBatch:(id)a0 totalTransfers:(id)a1 indexOfTransfers:(unsigned long long)a2;
- (id)init;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)a0;
- (void)batchCompletedWithTransfers:(id)a0;
- (void)resetAttachmentWatermark;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)a0 diskVolume:(id)a1 urgency:(int)a2 requestedSize:(unsigned long long)a3;
- (id)_copyAttachmentRecord:(id)a0;
- (long long)purgeAttachments:(long long)a0;
- (id)_fileTransfersToValidate:(id)a0;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)a0 totalTransfers:(id)a1;
- (id)_ckUtilitiesSharedInstance;
- (void)_cacheDeleteSetUp;
- (BOOL)canMarkPurgeableIfIsRichLinkForTransferGUID:(id)a0;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)a0 urgency:(int)a1;
- (long long)_purgeableSpaceGivenUrgency:(int)a0;
- (id)_getIndexSetForBatch:(id)a0 indexOfTransfers:(unsigned long long)a1;
- (id)_cacheDeleteGuidanceDictionaryForRequestedSize:(unsigned long long)a0;
- (void)metricAttachmentsToPurge:(long long)a0 withActivity:(id)a1;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)a0 urgency:(int)a1;
- (void).cxx_destruct;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)a0;

@end
