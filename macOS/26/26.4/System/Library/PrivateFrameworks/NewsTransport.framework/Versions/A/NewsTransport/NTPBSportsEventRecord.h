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
@property (readonly, nonatomic) BOOL hasSportsLogoImageURL;
@property (retain, nonatomic) NSString *sportsLogoImageURL;
@property (readonly, nonatomic) BOOL hasSportsLogoImageCompactURL;
@property (retain, nonatomic) NSString *sportsLogoImageCompactURL;
@property (readonly, nonatomic) BOOL hasSportsLogoImageLargeURL;
@property (retain, nonatomic) NSString *sportsLogoImageLargeURL;
@property (readonly, nonatomic) BOOL hasSportsLogoAltImageURL;
@property (retain, nonatomic) NSString *sportsLogoAltImageURL;
@property (readonly, nonatomic) BOOL hasSportsLogoAltImageCompactURL;
@property (retain, nonatomic) NSString *sportsLogoAltImageCompactURL;
@property (readonly, nonatomic) BOOL hasSportsLogoAltImageLargeURL;
@property (retain, nonatomic) NSString *sportsLogoAltImageLargeURL;

+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)eventCompetitorTagIDsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
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
