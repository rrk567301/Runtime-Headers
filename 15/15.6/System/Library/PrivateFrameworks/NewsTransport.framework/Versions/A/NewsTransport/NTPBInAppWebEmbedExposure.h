@class NSData, NSString;

@interface NTPBInAppWebEmbedExposure : PBCodable <NSCopying> {
    struct { unsigned char articleDisplayRankInGroup : 1; unsigned char displayRank : 1; unsigned char feedType : 1; unsigned char groupType : 1; unsigned char moduleEventType : 1; unsigned char moduleItemCount : 1; unsigned char moduleItemPosition : 1; unsigned char moduleLocation : 1; unsigned char webEmbedLocation : 1; } _has;
}

@property (nonatomic) char hasModuleEventType;
@property (nonatomic) int moduleEventType;
@property (nonatomic) char hasModuleLocation;
@property (nonatomic) int moduleLocation;
@property (nonatomic) char hasModuleItemCount;
@property (nonatomic) int moduleItemCount;
@property (readonly, nonatomic) char hasModuleExposureId;
@property (retain, nonatomic) NSData *moduleExposureId;
@property (readonly, nonatomic) char hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) char hasWebEmbedLocation;
@property (nonatomic) int webEmbedLocation;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) char hasModuleItemPosition;
@property (nonatomic) int moduleItemPosition;
@property (readonly, nonatomic) char hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic) char hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) char hasArticleDisplayRankInGroup;
@property (nonatomic) int articleDisplayRankInGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (int)StringAsModuleEventType:(id)a0;
- (int)StringAsWebEmbedLocation:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsModuleLocation:(id)a0;
- (id)feedTypeAsString:(int)a0;
- (id)groupTypeAsString:(int)a0;
- (id)moduleEventTypeAsString:(int)a0;
- (id)moduleLocationAsString:(int)a0;
- (id)webEmbedLocationAsString:(int)a0;

@end
