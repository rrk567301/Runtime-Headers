@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBSportsEventRecord : PBCodable <NSCopying> {
    struct { unsigned char minimumNewsVersion : 1; unsigned char isDeprecated : 1; } _has;
}

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) char hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) char hasSuperfeedConfigResourceID;
@property (retain, nonatomic) NSString *superfeedConfigResourceID;
@property (retain, nonatomic) NSMutableArray *eventCompetitorTagIDs;
@property (readonly, nonatomic) char hasHighlightsArticleListID;
@property (retain, nonatomic) NSString *highlightsArticleListID;
@property (readonly, nonatomic) char hasEventArticleListID;
@property (retain, nonatomic) NSString *eventArticleListID;
@property (readonly, nonatomic) char hasSportsData;
@property (retain, nonatomic) NSString *sportsData;
@property (readonly, nonatomic) char hasSportsTheme;
@property (retain, nonatomic) NSString *sportsTheme;
@property (readonly, nonatomic) char hasEventLeagueTagID;
@property (retain, nonatomic) NSString *eventLeagueTagID;
@property (nonatomic) char hasIsDeprecated;
@property (nonatomic) char isDeprecated;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;

+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)eventCompetitorTagIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAllowedStorefrontIDs:(id)a0;
- (void)addBlockedStorefrontIDs:(id)a0;
- (void)addEventCompetitorTagIDs:(id)a0;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearBlockedStorefrontIDs;
- (void)clearEventCompetitorTagIDs;
- (id)eventCompetitorTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventCompetitorTagIDsCount;

@end
