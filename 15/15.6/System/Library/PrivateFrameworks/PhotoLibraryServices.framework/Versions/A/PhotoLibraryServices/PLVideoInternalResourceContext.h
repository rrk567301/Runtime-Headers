@class NSString, NSManagedObjectContext, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation> {
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

@property (readonly, nonatomic) char isWalrusEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)uuid;
- (char)validateResource:(id)a0;
- (id)backingResourceForVideoResource:(id)a0;
- (char)hasAdjustments;
- (id)initWithManagedObjectContext:(id)a0 asset:(id)a1;
- (char)isPhotoIris;
- (char)isOriginalSlomo;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (id)videoResourcesMatchingVersions:(id)a0;
- (void)repairResource:(id)a0;
- (char)shouldUseNonAdjustedVersion;
- (double)sizeThresholdForHighQuality;

@end
