@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) char hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (readonly, nonatomic) char hasTrendingArticleListID;
@property (retain, nonatomic) NSString *trendingArticleListID;
@property (retain, nonatomic) NSMutableArray *editorialArticleListIDs;
@property (retain, nonatomic) NSMutableArray *editorialSectionTagIDs;
@property (readonly, nonatomic) char hasSpotlightArticleID;
@property (retain, nonatomic) NSString *spotlightArticleID;
@property (retain, nonatomic) NSMutableArray *todayFeedTopStoriesArticleIDs;
@property (readonly, nonatomic) char hasTodayFeedConfiguration;
@property (retain, nonatomic) NSString *todayFeedConfiguration;

+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)todayFeedTopStoriesArticleIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)a0;
- (void)addEditorialArticleListIDs:(id)a0;
- (void)addEditorialSectionTagIDs:(id)a0;
- (void)addTodayFeedTopStoriesArticleIDs:(id)a0;
- (void)clearEditorialArticleListIDs;
- (void)clearEditorialSectionTagIDs;
- (void)clearTodayFeedTopStoriesArticleIDs;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)editorialSectionTagIDsCount;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;

@end
