@class NSString, NTPBAlternateHeadline;

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying> {
    struct { unsigned char widgetArticleCount : 1; unsigned char widgetArticleCountInSection : 1; unsigned char widgetArticleRank : 1; unsigned char widgetArticleRankInSection : 1; unsigned char widgetContentType : 1; unsigned char widgetExposureStackLocation : 1; unsigned char widgetSectionDisplayRank : 1; unsigned char widgetType : 1; } _has;
}

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
@property (nonatomic) char hasWidgetArticleCountInSection;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic) char hasWidgetContentType;
@property (nonatomic) int widgetContentType;
@property (readonly, nonatomic) char hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (readonly, nonatomic) char hasAlternateHeadline;
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline;
@property (nonatomic) char hasWidgetExposureStackLocation;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) char hasWidgetType;
@property (nonatomic) int widgetType;
@property (readonly, nonatomic) char hasWidgetSectionSubid;
@property (retain, nonatomic) NSString *widgetSectionSubid;
@property (readonly, nonatomic) char hasStoryType;
@property (retain, nonatomic) NSString *storyType;

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
- (int)StringAsWidgetContentType:(id)a0;
- (int)StringAsWidgetExposureStackLocation:(id)a0;
- (id)widgetContentTypeAsString:(int)a0;
- (id)widgetExposureStackLocationAsString:(int)a0;
- (id)widgetTypeAsString:(int)a0;

@end
