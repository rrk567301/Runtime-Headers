@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBSportsEventRecord : PBCodable <NSCopying> {
    struct { unsigned char minimumNewsVersion : 1; unsigned char isDeprecated : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL hasSuperfeedConfigResourceID;
@property (retain, nonatomic) NSString *superfeedConfigResourceID;
@property (retain, nonatomic) NSMutableArray *eventCompetitorTagIDs;
@property (readonly, nonatomic) BOOL hasHighlightsArticleListID;
@property (retain, nonatomic) NSString *highlightsArticleListID;
@property (readonly, nonatomic) BOOL hasEventArticleListID;
@property (retain, nonatomic) NSString *eventArticleListID;
@property (readonly, nonatomic) BOOL hasSportsData;
@property (retain, nonatomic) NSString *sportsData;
@property (readonly, nonatomic) BOOL hasSportsTheme;
@property (retain, nonatomic) NSString *sportsTheme;
@property (readonly, nonatomic) BOOL hasEventLeagueTagID;
@property (retain, nonatomic) NSString *eventLeagueTagID;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL isDeprecated;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;

+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)eventCompetitorTagIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
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
