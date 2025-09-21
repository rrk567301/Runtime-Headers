@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBAudioConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (readonly, nonatomic) char hasDailyBriefingArticleID;
@property (retain, nonatomic) NSString *dailyBriefingArticleID;
@property (readonly, nonatomic) char hasFeaturedAudioArticleListID;
@property (retain, nonatomic) NSString *featuredAudioArticleListID;
@property (retain, nonatomic) NSMutableArray *heroArticleIDs;
@property (readonly, nonatomic) char hasLatestAudioArticleListID;
@property (retain, nonatomic) NSString *latestAudioArticleListID;
@property (readonly, nonatomic) char hasFeedConfiguration;
@property (retain, nonatomic) NSString *feedConfiguration;
@property (readonly, nonatomic) char hasCuratedArticleIDs;
@property (retain, nonatomic) NSString *curatedArticleIDs;

+ (Class)heroArticleIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHeroArticleIDs:(id)a0;
- (void)clearHeroArticleIDs;
- (id)heroArticleIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)heroArticleIDsCount;

@end
