@class PHAssetCreationMetadataCopyOptions, PHAssetCreationAdjustmentBakeInOptions;

@interface PHAssetCreationOptions : NSObject <NSCopying>

@property (nonatomic) char crashBeforeCreation;
@property (nonatomic) char shouldDownloadOrCloudReReferenceMissingResources;
@property (copy, nonatomic) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions;
@property (copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillSourceTime;
@property (nonatomic) char resetUserSpecificMetadata;
@property (nonatomic) char copyStillPhotoFromLivePhoto;
@property (nonatomic) char copyOriginal;
@property (nonatomic) char copySinglePhotoFromBurst;
@property (nonatomic) char copyAsAlternateAsset;
@property (nonatomic) char useRecoverableStagingDirectory;
@property (nonatomic) char shouldCreateScreenshot;
@property (nonatomic) char shouldUseAutomaticallyGeneratedOriginalFilename;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
