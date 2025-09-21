@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHAssetExportRequestOptions : NSObject

@property (nonatomic) long long locationComparisonStrategy;
@property (nonatomic) char forceDateTimeMetadataBaking;
@property (nonatomic) char forceLocationMetadataBaking;
@property (nonatomic) char forceCaptionMetadataBaking;
@property (nonatomic) char forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) char disableUpdatingFileCreationDatesOnExportedFileURLs;
@property (nonatomic) char includeAllAssetResources;
@property (nonatomic) long long variant;
@property (nonatomic) char treatLivePhotoAsStill;
@property (nonatomic) char flattenSlomoVideos;
@property (nonatomic) char dontAllowRAW;
@property (nonatomic) char shouldStripLocation;
@property (nonatomic) char shouldStripCaption;
@property (nonatomic) char shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (copy, nonatomic) NSString *videoExportFileType;
@property (nonatomic) char disableMetadataCorrections;
@property (nonatomic) char allowMetadataConversionsForPNG;
@property (nonatomic) char shouldExportUnmodifiedOriginalResources;
@property (nonatomic) char shouldBundleComplexAssetResources;
@property (copy, nonatomic) NSString *customFilenameBase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToAssetExportRequestOptions:(id)a0;

@end
