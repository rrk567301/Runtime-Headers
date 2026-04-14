@class NSString, NSArray, PLSpatialOverCaptureInformation, NSMutableArray, PLMutablePTPAsset;
@protocol PLPTPConversionSupport, PLFileManager, PLPTPTransferableAsset;

@interface PLPTPAssetBuilder : NSObject {
    id<PLPTPConversionSupport> _conversionSupport;
    id<PLPTPTransferableAsset> _asset;
    id<PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    PLMutablePTPAsset *_currentPtpAsset;
    PLMutablePTPAsset *_commonPtpAsset;
    PLMutablePTPAsset *_originalPtpAsset;
    NSArray *_sidecarPtpAssets;
    PLMutablePTPAsset *_diagnosticPtpAsset;
    PLMutablePTPAsset *_adjustmentPtpAsset;
    PLMutablePTPAsset *_fullSizeRenderImagePtpAsset;
    PLMutablePTPAsset *_fullSizeRenderVideoPtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureImagePtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureVideoComplementPtpAsset;
    PLMutablePTPAsset *_originalAdjustmentPtpAsset;
    PLSpatialOverCaptureInformation *_cachedSpatialOverCaptureInformation;
    PLMutablePTPAsset *_penultimateImagePtpAsset;
    PLMutablePTPAsset *_penultimateVideoPtpAsset;
    NSMutableArray *_convertedAssets;
    BOOL _irisSidecarRequiresFormatConversion;
}

+ (id)pictureTransferProtocolAssetsForAsset:(id)a0 withConversionSupport:(id)a1;
+ (BOOL)_shouldIncludeDiagnosticFile;

- (void).cxx_destruct;
- (id)spatialOverCaptureInformation;
- (id)initWithAsset:(id)a0 conversionSupport:(id)a1;
- (id)pictureTransferProtocolAssets;
- (id)initWithAsset:(id)a0 conversionSupport:(id)a1 fileManager:(id)a2;
- (BOOL)_suppressPtpInfo;
- (void)_buildCommonAsset;
- (BOOL)_buildOriginalAsset;
- (void)_buildSidecarAssets;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (void)_buildDiagnosticAsset;
- (void)_buildAdjustmentAsset;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildFullSizeRenderVideoAsset;
- (void)buildSpatialOverCaptureContentPtpAsset;
- (void)buildSpatialOverCaptureVideoComplementPtpAsset;
- (void)buildPenultimateImagePtpAsset;
- (void)buildPenultimateVideoPtpAsset;
- (void)updateSiblingAssetTypesOnMutablePTPAssets:(id)a0;
- (void)_buildModificationAndCreationDate;
- (BOOL)_buildDirectoryPathAndFilename;
- (void)_buildPhotoKey;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildOriginatingAssetID;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildImageDimensions;
- (void)_buildThumbnailDimensions;
- (void)_buildOrientation;
- (void)_durationOfTheAsset;
- (void)_buildGPSInformation;
- (void)_buildGroupUUID;
- (void)_buildBurst;
- (void)_buildSlowMo;
- (void)_buildTimelapse;
- (void)_buildRelatedUUID;
- (void)_buildDeletedFlag;
- (void)_buildSpatialOverCaptureGroupIdentifier;
- (void)updateAssetForFormatConversion:(id)a0 isVideo:(BOOL)a1 isRender:(BOOL)a2 forceLegacyConversion:(BOOL)a3;
- (void)_updateAssetForTranscodeChoice:(id)a0 withConversionResult:(id)a1;
- (void)_updateAsset:(id)a0 withConversionResult:(id)a1;
- (BOOL)_hasIrisSidecarFile;
- (BOOL)hasSpatialOverCaptureContent;
- (void)buildOriginalAdjustmentPtpAsset;
- (id)_assetForSidecar:(id)a0 sidecarPath:(id)a1 irisSidecarPath:(id)a2;
- (void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;

@end
