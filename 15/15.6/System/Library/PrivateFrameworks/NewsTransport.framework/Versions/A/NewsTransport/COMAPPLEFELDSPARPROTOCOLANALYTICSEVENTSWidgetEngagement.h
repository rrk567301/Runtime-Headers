@class NSString, NSMutableArray, NSData;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement : PBCodable <NSCopying> {
    struct { unsigned char contentFetchDate : 1; unsigned char widgetArticleCount : 1; unsigned char widgetArticleCountInSection : 1; unsigned char widgetArticleRank : 1; unsigned char widgetArticleRankInSection : 1; unsigned char widgetContentType : 1; unsigned char widgetDisplayMode : 1; unsigned char widgetEngagementType : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetSectionDisplayRank : 1; unsigned char widgetType : 1; unsigned char widgetVideoPresentationReason : 1; } _has;
}

@property (nonatomic) char hasWidgetEngagementType;
@property (nonatomic) int widgetEngagementType;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) char hasWidgetSectionId;
@property (retain, nonatomic) NSString *widgetSectionId;
@property (nonatomic) char hasWidgetSectionDisplayRank;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic) char hasWidgetArticleRankInSection;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) char hasWidgetArticleRank;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) char hasWidgetArticleCount;
@property (nonatomic) int widgetArticleCount;
@property (retain, nonatomic) NSMutableArray *otherVisibleSections;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) char hasWidgetVideoPresentationReason;
@property (nonatomic) int widgetVideoPresentationReason;
@property (nonatomic) char hasWidgetArticleCountInSection;
@property (nonatomic) int widgetArticleCountInSection;
@property (readonly, nonatomic) char hasWidgetUserId;
@property (retain, nonatomic) NSString *widgetUserId;
@property (nonatomic) char hasWidgetContentType;
@property (nonatomic) int widgetContentType;
@property (readonly, nonatomic) char hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (readonly, nonatomic) char hasEngagementTargetUrl;
@property (retain, nonatomic) NSString *engagementTargetUrl;
@property (readonly, nonatomic) char hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) char hasContentFetchDate;
@property (nonatomic) long long contentFetchDate;
@property (nonatomic) char hasWidgetDisplayMode;
@property (nonatomic) int widgetDisplayMode;
@property (readonly, nonatomic) char hasWidgetContentId;
@property (retain, nonatomic) NSString *widgetContentId;
@property (nonatomic) char hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) char hasWidgetType;
@property (nonatomic) int widgetType;
@property (readonly, nonatomic) char hasWidgetSectionSubid;
@property (retain, nonatomic) NSString *widgetSectionSubid;
@property (readonly, nonatomic) char hasStoryType;
@property (retain, nonatomic) NSString *storyType;
@property (readonly, nonatomic) char hasEngagementId;
@property (retain, nonatomic) NSString *engagementId;
@property (readonly, nonatomic) char hasEntryId;
@property (retain, nonatomic) NSString *entryId;

+ (Class)otherVisibleSectionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWidgetDisplayMode:(id)a0;
- (int)StringAsWidgetEngagementType:(id)a0;
- (int)StringAsWidgetType:(id)a0;
- (int)StringAsWidgetContentType:(id)a0;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (int)StringAsWidgetVideoPresentationReason:(id)a0;
- (void)addOtherVisibleSections:(id)a0;
- (void)clearOtherVisibleSections;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)otherVisibleSectionsCount;
- (id)widgetContentTypeAsString:(int)a0;
- (id)widgetDisplayModeAsString:(int)a0;
- (id)widgetEngagementTypeAsString:(int)a0;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (id)widgetTypeAsString:(int)a0;
- (id)widgetVideoPresentationReasonAsString:(int)a0;

@end
