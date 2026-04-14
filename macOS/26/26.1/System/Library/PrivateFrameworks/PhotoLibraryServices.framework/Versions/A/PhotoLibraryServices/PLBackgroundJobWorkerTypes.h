@interface PLBackgroundJobWorkerTypes : NSObject {
    BOOL _includedTypes[22];
}

+ (id)maskForFeatureAvailability;
+ (id)typesMaskForDeferredProcessingNeeded:(unsigned short)a0;
+ (id)allTypesMask;
+ (id)backgroundJobWorkerTypesMaskGuestAssetSync:(BOOL)a0 personSync:(BOOL)a1 syndicationSync:(BOOL)a2 syndicationResourceSanitization:(BOOL)a3 syndicationResourceDownload:(BOOL)a4 syndicationAssetCleanup:(BOOL)a5 assetStack:(BOOL)a6 duplicateDetector:(BOOL)a7 deferredRenderDerivativesLowPriority:(BOOL)a8 deferredRenderDerivativesHighPriority:(BOOL)a9 resourceAvailability:(BOOL)a10 stableHash:(BOOL)a11 editRenderingImage:(BOOL)a12 editRenderingVideo:(BOOL)a13 highPrioritySearchIndexing:(BOOL)a14 lowPriorityBatterySearchIndexing:(BOOL)a15 lowPriorityChargerSearchIndexing:(BOOL)a16 sharedAssetContainerUpdate:(BOOL)a17 assetResourceUploadJob:(BOOL)a18 assetResourceUploadExtensionRunner:(BOOL)a19 featureAvailability:(BOOL)a20;
+ (id)maskForAssetResourceExtensionRunner;
+ (id)maskForAssetResourceUploadJob;
+ (id)maskForBecomingNonSyncablePhotoLibrary;
+ (id)maskForGuestAssetSync;
+ (id)maskForSpotlightReindexing;
+ (id)maskForSyndicationSync;
+ (id)maskForUrgentResourceCriteria;
+ (id)typesMaskForDeferredProcessingNeeded:(unsigned short)a0 videoDeferredProcessingNeeded:(unsigned short)a1;
+ (id)typesMaskForVideoDeferredProcessingNeeded:(unsigned short)a0;
+ (id)typesMaskFromWorkerCodes:(id)a0;
+ (id)workerCodes;
+ (id)workerTypesMaskForBackgroundJobType:(short)a0;
+ (id)workerTypesMaskForBackgroundJobWorkerType:(unsigned long long)a0;
+ (id)workerTypesMaskForBackgroundJobWorkerTypes:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)hasWork;
- (BOOL)containsWorker:(id)a0;
- (BOOL)containsTypes:(id)a0;
- (id)typesMaskByUnioningWithTypes:(id)a0;

@end
