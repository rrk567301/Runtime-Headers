@interface PLBackgroundJobWorkerTypes : NSObject {
    BOOL _includedTypes[22];
}

+ (id)maskForFeatureAvailability;
+ (id)allTypesMask;
+ (id)backgroundJobWorkerTypesMaskGuestAssetSync:(BOOL)a0 personSync:(BOOL)a1 syndicationSync:(BOOL)a2 syndicationResourceSanitization:(BOOL)a3 syndicationResourceDownload:(BOOL)a4 syndicationAssetCleanup:(BOOL)a5 assetStack:(BOOL)a6 duplicateDetector:(BOOL)a7 deferredRenderDerivativesLowPriority:(BOOL)a8 deferredRenderDerivativesHighPriority:(BOOL)a9 resourceAvailability:(BOOL)a10 stableHash:(BOOL)a11 editRenderingImage:(BOOL)a12 editRenderingVideo:(BOOL)a13 highPrioritySearchIndexing:(BOOL)a14 lowPriorityBatterySearchIndexing:(BOOL)a15 lowPriorityChargerSearchIndexing:(BOOL)a16 sharedAssetContainerUpdate:(BOOL)a17 assetResourceUploadJob:(BOOL)a18 assetResourceUploadExtensionRunner:(BOOL)a19 featureAvailability:(BOOL)a20;
+ (id)maskForAssetResourceExtensionRunner;
+ (id)maskForAssetResourceUploadJob;
+ (id)maskForAssetStableHashProcessing;
+ (id)maskForAssetStackProcessing;
+ (id)maskForDeferredRenderDerivativesHighPriority;
+ (id)maskForDeferredRenderDerivativesLowPriority;
+ (id)maskForDeferredResourceAvailability;
+ (id)maskForDuplicateDetectorProcessing;
+ (id)maskForEditRenderingImage;
+ (id)maskForEditRenderingVideo;
+ (id)maskForGuestAssetSync;
+ (id)maskForHighPrioritySearchIndexing;
+ (id)maskForLowPriorityBatterySearchIndexing;
+ (id)maskForLowPriorityChargerSearchIndexing;
+ (id)maskForPersonSync;
+ (id)maskForSharedAssetContainerUpdate;
+ (id)maskForSyndicationAssetCleanup;
+ (id)maskForSyndicationResourceDownload;
+ (id)maskForSyndicationResourceSanitization;
+ (id)maskForSyndicationSync;
+ (id)maskForUrgentResourceCriteria;
+ (id)typesMaskFromWorkerCodes:(id)a0;
+ (id)workerCodes;
+ (id)workerTypesMaskForBackgroundJobType:(short)a0;
+ (id)workerTypesMaskForBackgroundJobWorkerType:(unsigned long long)a0;
+ (id)workerTypesMaskForBackgroundJobWorkerTypes:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasWork;
- (BOOL)containsWorker:(id)a0;
- (BOOL)containsTypes:(id)a0;
- (id)typesMaskByUnioningWithTypes:(id)a0;

@end
