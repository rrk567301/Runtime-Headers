@class NSString, NSManagedObjectContext, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)hasAdjustments;
- (BOOL)isPhotoIris;
- (id)initWithManagedObjectContext:(id)a0 asset:(id)a1;
- (id)backingResourceForVideoResource:(id)a0;
- (double)sizeThresholdForHighQuality;
- (id)videoResourcesMatchingVersions:(id)a0;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (BOOL)validateResource:(id)a0;
- (void)repairResource:(id)a0;
- (BOOL)shouldUseNonAdjustedVersion;

@end
