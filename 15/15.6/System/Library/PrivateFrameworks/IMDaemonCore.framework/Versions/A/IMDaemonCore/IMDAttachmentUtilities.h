@interface IMDAttachmentUtilities : NSObject

+ (unsigned long long)mmcsTargetReportSizeForHighQualityPhotoSize:(unsigned long long)a0 commonCapabilities:(id)a1;
+ (unsigned long long)modernHighQualityPhotoSizeLimit;
+ (char)_doesWRMRecommendDisablingLQM;
+ (id)_fetchSizeLimitsForTransfer:(id)a0 mode:(unsigned long long)a1;
+ (void)_fetchStandardSizeLimit:(unsigned long long *)a0 highQualitySizeLimit:(unsigned long long *)a1 forTransfer:(id)a2;
+ (void)_fileTransferSizeForAAVideoFromServerBag:(unsigned long long *)a0 smallSize:(unsigned long long *)a1 serverBag:(id)a2;
+ (void)_fileTransferSizeForAuxVideoFromServerBag:(unsigned long long *)a0 smallSize:(unsigned long long *)a1 serverBag:(id)a2;
+ (unsigned long long)_fileTransferSizeForSpatialImageFromServerBag:(id)a0;
+ (unsigned long long)_maxAllowedSpatialImageSize;
+ (unsigned long long)_maxAllowedStereoVideoSize;
+ (unsigned long long)_minSizeForLargeAuxVideo;
+ (unsigned long long)_smallerImageFileSize;
+ (char)commonCapabilitiesSupportHighQualityPhotos:(id)a0;
+ (char)didLQMSettingChanged;
+ (id)fetchSizeLimitsForTransfer:(id)a0;
+ (id)fetchSizeLimitsForTransfer:(id)a0 mode:(unsigned long long)a1;
+ (unsigned long long)freeSpaceInHomeDirectory;
+ (char)isPreviewAttachmentSizeEnabled;
+ (long long)largeFileSizeFor:(id)a0 allowedLargerRepresentation:(char *)a1;
+ (unsigned long long)maxTransferAudioFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
+ (void)maxTransferFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
+ (unsigned long long)maxTransferVideoFileSizeForWifi:(unsigned long long *)a0 cell:(unsigned long long *)a1;
+ (id)messageAttachmentSendableUTIs;
+ (id)messageAttachmentSendableUTIsForResourcePath:(id)a0;
+ (unsigned long long)minimumFreeSpace;
+ (char)shouldAllowBackwardsCompatibilitySizeOverride;
+ (char)shouldAllowHighQualityPhotoUploadForNetworkConditions;
+ (char)shouldEnablePreviewTranscodingQualityForTransfer:(id)a0 isSending:(char)a1;
+ (char)shouldSendLowResolutionOnly;
+ (unsigned long long)tinyImageQualitySizeLimit;
+ (char)updateAndReturnLQMStateAfterPreviewAttachmentSizeEnabled;

@end
