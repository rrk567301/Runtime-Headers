@class NSString, NTPBTodayModuleContentRequest, NTPBSectionSlotCostInfo;

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying> {
    struct { unsigned char bannerSlotCost : 1; unsigned char embedsLimit : 1; unsigned char leadingCellThumbnailSizePreset : 1; unsigned char maxHeadlineScale : 1; unsigned char minHeadlineScale : 1; unsigned char qualityOfService : 1; unsigned char scale : 1; unsigned char slotsLimit : 1; unsigned char sourceNameImageSizePreset : 1; unsigned char thumbnailSizePreset : 1; unsigned char dynamicThumbnailSizePresetMinimumHeightInPixels : 1; unsigned char dynamicThumbnailSizePresetMinimumWidthInPixels : 1; unsigned char widgetSize : 1; unsigned char allowOnlyWatchEligibleSections : 1; unsigned char allowSectionTitles : 1; unsigned char fetchWidgetConfig : 1; unsigned char preferCompactSectionName : 1; unsigned char preferCompactSourceName : 1; unsigned char respectsWidgetSlotsLimit : 1; unsigned char respectsWidgetVisibleSectionsPerQueueLimit : 1; } _has;
}

@property (nonatomic) char hasSlotsLimit;
@property (nonatomic) double slotsLimit;
@property (nonatomic) char hasRespectsWidgetSlotsLimit;
@property (nonatomic) char respectsWidgetSlotsLimit;
@property (nonatomic) char hasPreferCompactSectionName;
@property (nonatomic) char preferCompactSectionName;
@property (nonatomic) char hasPreferCompactSourceName;
@property (nonatomic) char preferCompactSourceName;
@property (nonatomic) char hasThumbnailSizePreset;
@property (nonatomic) long long thumbnailSizePreset;
@property (nonatomic) char hasSourceNameImageSizePreset;
@property (nonatomic) long long sourceNameImageSizePreset;
@property (nonatomic) char hasQualityOfService;
@property (nonatomic) long long qualityOfService;
@property (readonly, nonatomic) char hasSectionSlotCostInfo;
@property (retain, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo;
@property (nonatomic) char hasFetchWidgetConfig;
@property (nonatomic) char fetchWidgetConfig;
@property (nonatomic) char hasAllowOnlyWatchEligibleSections;
@property (nonatomic) char allowOnlyWatchEligibleSections;
@property (nonatomic) char hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property (nonatomic) char respectsWidgetVisibleSectionsPerQueueLimit;
@property (readonly, nonatomic) char hasAssetsDirectoryFileURLString;
@property (retain, nonatomic) NSString *assetsDirectoryFileURLString;
@property (nonatomic) char hasLeadingCellThumbnailSizePreset;
@property (nonatomic) long long leadingCellThumbnailSizePreset;
@property (nonatomic) char hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels;
@property (nonatomic) char hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels;
@property (nonatomic) char hasAllowSectionTitles;
@property (nonatomic) char allowSectionTitles;
@property (nonatomic) char hasEmbedsLimit;
@property (nonatomic) long long embedsLimit;
@property (nonatomic) char hasScale;
@property (nonatomic) double scale;
@property (readonly, nonatomic) char hasKeyboardInputMode;
@property (retain, nonatomic) NSString *keyboardInputMode;
@property (readonly, nonatomic) char hasRequest;
@property (retain, nonatomic) NTPBTodayModuleContentRequest *request;
@property (nonatomic) char hasMinHeadlineScale;
@property (nonatomic) double minHeadlineScale;
@property (nonatomic) char hasMaxHeadlineScale;
@property (nonatomic) double maxHeadlineScale;
@property (nonatomic) char hasWidgetSize;
@property (nonatomic) int widgetSize;
@property (nonatomic) char hasBannerSlotCost;
@property (nonatomic) double bannerSlotCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
