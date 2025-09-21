@class NSString, NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {
    struct { unsigned char contentFetchDate : 1; unsigned char widgetAppearanceType : 1; unsigned char widgetArticleCount : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetHeadlineExposureCount : 1; unsigned char widgetType : 1; } _has;
}

@property (nonatomic) char hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) char hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetHeadlineExposureCount;
@property (retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs;
@property (retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs;
@property (nonatomic) char hasWidgetAppearanceType;
@property (nonatomic) int widgetAppearanceType;
@property (readonly, nonatomic) char hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (nonatomic) char hasContentFetchDate;
@property (nonatomic) long long contentFetchDate;
@property (readonly, nonatomic) char hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) char hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) char hasWidgetType;
@property (nonatomic) int widgetType;
@property (readonly, nonatomic) char hasEntryId;
@property (retain, nonatomic) NSString *entryId;
@property (readonly, nonatomic) char hasBannerIdentifier;
@property (retain, nonatomic) NSString *bannerIdentifier;

+ (Class)widgetPersonalizationFeatureCTRPairType;
+ (Class)widgetSectionsArticleCountPairType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWidgetType:(id)a0;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)a0;
- (void)addWidgetSectionsArticleCountPair:(id)a0;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (void)clearWidgetSectionsArticleCountPairs;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)a0;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
- (id)widgetTypeAsString:(int)a0;

@end
